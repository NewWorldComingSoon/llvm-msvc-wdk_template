# llvm-msvc-windows-driver-template

Simple [`cmkr`](https://cmkr.build) template for a WDK kernel driver for Windows. The `WDK` package is based on [FindWDK](https://github.com/SergiusTheBest/FindWDK).

## Requirements

- Visual Studio 2022
- CMake 3.15+
- [WDK 11](https://learn.microsoft.com/en-us/windows-hardware/drivers/download-the-wdk)
- [llvm-msvc](https://github.com/NewWorldComingSoon/llvm-msvc-build/releases)

## Building win-x64 with llvm-msvc

```
cmake -Bbuild_x64 -Ax64 -TLLVM-MSVC_v143
cmake --build build_x64 --config Release
```

## Building win-arm64 with llvm-msvc

```
cmake -Bbuild_arm64 -AARM64 -TLLVM-MSVC_v143
cmake --build build_arm64 --config Release
```

You can open `build\llvm-msvc-driver-template.sln` in Visual Studio and work there.
