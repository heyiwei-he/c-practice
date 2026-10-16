@echo off
chcp 65001 >nul
rem 编译并运行（用法：run.cmd 源文件.c）
set "SRC=%~f1"
if "%SRC%"=="" (
  echo 用法：run.cmd 源文件.c
  exit /b 2
)
call "%~dp0build.cmd" "%SRC%"
if errorlevel 1 (
  echo.
  echo [编译失败] 上面的报错就是原因，改完再试一次。
  exit /b 1
)
echo ===== 运行结果 =====
"%~dpn1.exe"
echo ====================
