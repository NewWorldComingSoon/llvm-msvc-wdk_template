# llvm-msvc-windows-driver-template

Simple [`cmkr`](https://cmkr.build) template for a WDK kernel driver for Windows. The `WDK` package is based on [FindWDK](https://github.com/SergiusTheBest/FindWDK).

## Requirements

- Visual Studio 2022
- [WDK 11](https://learn.microsoft.com/en-us/windows-hardware/drivers/download-the-wdk)
- [llvm-msvc](https://github.com/NewWorldComingSoon/llvm-msvc-build/releases)
- CMake 3.15+

## Building with llvm-msvc

```
cmake -B build -TLLVM-MSVC_v143
cmake --build build --config Release
```

You can open `build\Driver.sln` in Visual Studio and work there.
