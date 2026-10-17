# 最小可用的 CMakeLists.txt —— 你以后在 Ubuntu / 任何 Linux 上都能用同一份
cmake_minimum_required(VERSION 3.20)

project(c-practice LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 源文件（Windows / Linux 都按 UTF-8 编译，中文注释才不会乱）
add_executable(pointer_check 指针验证.c)

if (MSVC)
  target_compile_options(pointer_check PRIVATE /W4 /utf-8)
else()
  target_compile_options(pointer_check PRIVATE -Wall -Wextra -finput-charset=UTF-8 -fexec-charset=UTF-8)
endif()
