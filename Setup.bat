@echo off
setlocal EnableExtensions EnableDelayedExpansion
cd %~dp0

set archive=sho_20210420_190740.tar
set remote_archive=https://www.oculus.com/x2asset/%archive%
set local_archive=%TMP%\%archive%

where curl.exe > nul 2> nul && where tar.exe > nul 2> nul
if errorlevel 1 (
  echo We depend on curl.exe and tar.exe to download the following URI:
  echo %source%
  echo Either do the operation manually using other commands or update Windows.
  exit /b 1
)

echo Downloading Content...
curl -L %remote_archive% --output %local_archive%
if errorlevel 1 (
  echo Failed to download content!
  exit /b 1
)

echo.
echo Extracting Content...
tar -xvf %local_archive%
if errorlevel 1 (
  echo Failed to extract Content!
  exit /b 1
)
del /q %Local_archive% > nul 2> nul

echo.
echo Success!
endlocal
