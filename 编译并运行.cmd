@echo off
chcp 65001 >nul
set "TARGET=%~1"
if "%TARGET%"=="" set "TARGET=%~dp0指针验证.c"
call "%~dp0run.cmd" "%TARGET%"
echo.
pause
