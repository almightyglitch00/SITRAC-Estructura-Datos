@echo off
setlocal
cd /d "%~dp0"
where g++ >nul 2>nul
if errorlevel 1 (
  echo No se encontro g++. Agrega la carpeta bin de MinGW o Dev-C++ al PATH.
  pause
  exit /b 1
)
windres windows.rc -O coff -o windows.res
if errorlevel 1 goto error
g++ -std=c++11 -O2 -Wall -Wextra -static -mwindows -o SITRAC.exe src/windows.cpp src/interfaz.cpp src/util.cpp src/ciudades.cpp src/rutas.cpp src/pasajeros.cpp src/cola.cpp src/historial.cpp src/busquedas.cpp src/reportes.cpp src/archivos.cpp windows.res -lcomctl32 -lcomdlg32 -lgdi32
if errorlevel 1 goto error
echo Compilacion terminada. Abre SITRAC.exe.
pause
exit /b 0
:error
echo No se pudo compilar. Revisa el mensaje anterior.
pause
exit /b 1
