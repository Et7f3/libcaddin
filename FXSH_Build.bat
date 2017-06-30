@echo off
rem Do not edit! This batch file is created by CASIO fx-9860G SDK.


if exist LIBCADDI.G1A  del LIBCADDI.G1A

cd debug
if exist FXADDINror.bin  del FXADDINror.bin
"C:\Program Files\fx9860g_sdk\OS\SH\Bin\Hmake.exe" Addin.mak
cd ..
if not exist debug\FXADDINror.bin  goto error

"C:\Program Files\fx9860g_sdk\Tools\MakeAddinHeader363.exe" "C:\Users\elie\Desktop\planet-casio\libcaddin"
if not exist LIBCADDI.G1A  goto error
echo Build has completed.
goto end

:error
echo Build was not successful.

:end

