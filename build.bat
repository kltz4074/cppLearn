@echo off

cmake -S ./cmake -B build
cmake --build build --config Release

echo "build complete!"