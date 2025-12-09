@echo off
SETLOCAL ENABLEDELAYEDEXPANSION

REM Try to find GCC compiler
where gcc >nul 2>&1
IF %ERRORLEVEL% EQU 0 (
    REM GCC found - use it with Unix Makefiles
    SET "CMAKE_C_COMPILER=gcc"
    SET "CMAKE_CXX_COMPILER=g++"
    SET "GENERATOR=-G Unix Makefiles"
    ECHO Using GCC compiler with Unix Makefiles
) ELSE (
    REM GCC not found - use CMake default
    SET "CMAKE_C_COMPILER="
    SET "CMAKE_CXX_COMPILER="
    SET "GENERATOR="
    ECHO GCC not found, using CMake default compiler
)

REM Configure
IF NOT EXIST build MKDIR build
cd build
cmake .. %GENERATOR% -DCMAKE_C_COMPILER=%CMAKE_C_COMPILER% -DCMAKE_CXX_COMPILER=%CMAKE_CXX_COMPILER%
IF ERRORLEVEL 1 (
    ECHO CMake configuration failed
    cd ..
    EXIT /B 1
)

REM Build
cmake --build . --config Release
IF ERRORLEVEL 1 (
    ECHO Build failed
    cd ..
    EXIT /B 1
)

ECHO Build successful
cd ..
ENDLOCAL