@echo off
rem 用 Visual Studio 自带的 MSVC 编译一个 .c 文件（用法：build.cmd 源文件.c）
set "VCVARS=C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
set "SRC=%~f1"
if "%SRC%"=="" (
  echo 用法：build.cmd 源文件.c
  exit /b 2
)
if not exist "%SRC%" (
  echo 找不到源文件：%SRC%
  exit /b 2
)
if not exist "%VCVARS%" (
  echo 找不到 vcvars64.bat，Visual Studio 可能装到别的位置了。
  exit /b 2
)
call "%VCVARS%" >nul
cl /nologo /std:c11 /W4 /utf-8 /Fe:"%~dpn1.exe" "%SRC%"
exit /b %errorlevel%
