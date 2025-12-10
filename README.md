# cppLearn
My personal journey to becoming a world-class C++ developer :3

## C++ roadmap, from zero to senior

### 1. Tooling & Build Systems
- [x] Set up a modern dev environment (Linux/macOS/Windows, CMake ≥ 3.28)
- [x] Write clean, idiomatic Modern CMake (targets, presets, toolchains, interface libraries)
- [ ] Deep dive into the full build pipeline (preprocess → compile → assemble → link)
- [ ] Essential compiler flags (-Wall -Wextra -Werror -pedantic -O3 -march=native -flto -fno-exceptions etc.)
- [ ] Debugging mastery (gdb/lldb, VS Code, CLion, rr)
- [ ] Sanitizers in daily workflow (ASan, UBSan, TSan, MSan)
- [ ] Static analysis: clang-tidy, cppcheck, clang-format, IWYU
- [ ] Advanced Git (rebase workflow, submodules, git hooks, conventional commits)

### 2. Core Language Fundamentals
- [ ] Pointers, references, const-correctness
- [ ] Stack vs heap, object lifetime, memory layout, alignment & padding
- [ ] Undefined Behavior — know the most common sources by heart
- [ ] Value categories (lvalue/rvalue/xvalue/prvalue/glvalue)
- [ ] Move semantics & perfect forwarding
- [ ] RAII, Rule of Zero/Three/Five
- [ ] Smart pointers mastery (unique_ptr, shared_ptr, weak_ptr + custom deleters)

### 3. Object-Oriented & Software Design
- [ ] Encapsulation, inheritance, polymorphism (virtual, override, final)
- [ ] SOLID, GRASP and other design principles
- [ ] Classic and modern design patterns (GoF + concurrency patterns)
- [ ] pImpl idiom, type erasure, CRTP

### 4. STL Mastery
- [ ] All containers + complexity guarantees
- [ ] unordered containers internals (hashing, buckets, load factor, custom hash/eq)
- [ ] Allocators & Polymorphic Memory Resources (C++17/20)
- [ ] Iterator invalidation rules
- [ ] All STL algorithms + execution policies
- [ ] Modern vocabulary types: string_view, span, optional, any, variant, expected (C++23)

### 5. Templates & Generic Programming
- [ ] Function/class/variable/alias templates
- [ ] Variadic templates & parameter packs
- [ ] SFINAE, std::enable_if, tag dispatch
- [ ] C++20 Concepts & requires expressions
- [ ] Type traits library in depth
- [ ] Template metaprogramming (compile-time computations)
- [ ] Fold expressions, constexpr if, constexpr algorithms

### 6. Modern C++ Features (C++20 / C++23 / C++26)
- [ ] Coroutines & generators
- [ ] Ranges library (views, adapters, actions)
- [ ] std::format / std::print
- [ ] Modules (import std; and .cppm files)
- [ ] std::expected, std::mdspan, std::flat_map/set, std::generator etc.

### 7. Multithreading & Concurrency
- [ ] std::thread, jthread, thread-local storage
- [ ] All synchronization primitives (mutex, condition_variable, semaphore, barrier, latch)
- [ ] Atomics & memory orders (acquire/release/relaxed/seq_cst)
- [ ] False sharing & cache-line awareness
- [ ] std::future/promise, std::async, packaged_task
- [ ] Lock-free data structures (CAS, lock-free stack/queue)
- [ ] High-performance thread pools & work-stealing
- [ ] Coroutine-based concurrency

### 8. Performance Engineering
- [ ] CPU cache hierarchy & cache-friendly data layout (SoA vs AoS)
- [ ] Branch prediction & branchless programming
- [ ] SIMD (intrinsics + std::simd when stable)
- [ ] Profile-Guided Optimization (PGO)
- [ ] Link-Time Optimization (LTO / ThinLTO)
- [ ] Benchmarking (Google Benchmark, Quick-Bench)
- [ ] Profiling tools (perf, VTune, Tracy, flamegraphs)

### 9. Low-Level & Systems Programming
- [ ] POSIX signals, mmap, mprotect, madvise
- [ ] epoll / kqueue / IOCP
- [ ] io_uring (Linux)
- [ ] Zero-copy techniques
- [ ] Shared memory & IPC
- [ ] Inline assembly & CPU intrinsics when necessary

### 10. High-Performance Networking
- [ ] Raw sockets & modern wrappers
- [ ] Boost.Asio / standalone Asio (sync + async)
- [ ] Reactor & Proactor patterns
- [ ] Serialization: Protocol Buffers, FlatBuffers, Cap’n Proto

### 11. Memory Management Mastery
- [ ] Write your own PMR-compatible allocator
- [ ] Pool, slab, and stack allocators
- [ ] Understand jemalloc / tcmalloc / mimalloc internals
- [ ] Leak detection & memory profiling

### 12. Testing & Code Quality
- [ ] Google Test + Google Mock
- [ ] Property-based testing (RapidCheck)
- [ ] Fuzzing (libFuzzer, AFL++)
- [ ] Code coverage (lcov, llvm-cov)

### 13. Large-Scale Architecture
- [ ] Entity-Component-System (ECS)
- [ ] Plugin systems & dynamic loading
- [ ] Event-driven & actor model architectures
- [ ] Dependency injection patterns

### 14. Capstone / Expert-Level Projects (do at least 4–5)
- [ ] Custom high-performance memory allocator (PMR-compatible)
- [ ] Lock-free multi-producer/multi-consumer queue
- [ ] Work-stealing thread pool from scratch
- [ ] High-performance async server using io_uring + coroutines
- [ ] Small RPC framework (similar to gRPC but your own)
- [ ] Full-featured ECS engine
- [ ] Bytecode interpreter or tiny compiler for a toy language
- [ ] Multithreaded renderer on Vulkan

### 15. Beyond the Language (what separates staff+ engineers)
- [ ] Read real-world codebases: STL impl (libstdc++/libc++), Boost, Abseil, Folly, spdlog, etc.
- [ ] Contribute to serious open-source C++ projects
- [ ] Write technical blog posts or speak at conferences (C++ Russia, CoreHard, Meeting C++ etc.)
