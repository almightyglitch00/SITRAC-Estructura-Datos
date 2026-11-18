# SITRAC — Sistema Inteligente de Transporte y Gestión de Rutas

[![C++](https://img.shields.io/badge/C%2B%2B-11-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-lightgrey.svg)]()
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

Aplicación de escritorio profesional desarrollada en **C++** para la gestión integral de una red de transporte. Incluye interfaz gráfica nativa Win32 y versión de consola.

**Autores:**  
Santiago Ramirez & Deiver Monsalve

## Características principales

- **Gestión de Ciudades** y conexiones (grafo dirigido por listas de adyacencia).
- **Rutas** con cálculo del camino más corto mediante **Dijkstra** implementado manualmente.
- **Pasajeros** con registro, búsqueda, actualización y eliminación.
- **Cola FIFO** de solicitudes de viaje.
- **Historial** completo de viajes atendidos, rechazados o cancelados.
- **Búsquedas avanzadas** y **Reportes** estadísticos.
- **Persistencia** en archivos de texto con copias de seguridad automáticas (`.bak`).
- Interfaz gráfica moderna con panel lateral, formularios dinámicos y resultados en tiempo real.
- Versión de consola completa para entornos sin interfaz gráfica.

## Estructuras de datos utilizadas

Todas las estructuras fueron implementadas manualmente (sin STL para el modelo de datos):

- Lista enlazada simple (ciudades y pasajeros)
- Grafo dirigido con listas de adyacencia
- Cola FIFO
- Lista enlazada de historial
- Algoritmo de Dijkstra sin cola de prioridad de la STL

## Compilación y ejecución

### Visual Studio (recomendado)

1. Instala **Visual Studio** con la carga de trabajo **Desarrollo de escritorio con C++**.
2. Abre la carpeta del proyecto: `Archivo → Abrir → Carpeta...` y selecciona la raíz de SITRAC.
3. Visual Studio detectará automáticamente `CMakeLists.txt`.
4. Selecciona el destino **Windows x64** y compila el proyecto `SITRAC`.
5. El ejecutable se generará junto con la carpeta `datos/` copiada automáticamente.

### MinGW / g++

```bash
# Windows
COMPILAR_WINDOWS.bat

# Linux / macOS (versión consola)
make
./sitrac
```

### Dev-C++

Abre el archivo `SITRAC-Windows.dev` (interfaz gráfica) o `SITRAC.dev` (consola).

## Estructura del proyecto

```
SITRAC/
├── src/                  # Código fuente modular
│   ├── main.cpp          # Versión consola
│   ├── windows.cpp       # Interfaz gráfica Win32
│   ├── interfaz.cpp      # Puente entre GUI y lógica
│   ├── ciudades.*        # Gestión de ciudades y conexiones
│   ├── rutas.*           # Rutas y Dijkstra
│   ├── pasajeros.*
│   ├── cola.*
│   ├── historial.*
│   ├── busquedas.*
│   ├── reportes.*
│   ├── archivos.*
│   └── util.*
├── datos/                # Datos de ejemplo (ciudades de Colombia)
├── pruebas/              # Scripts y pruebas automatizadas
├── CMakeLists.txt        # Sistema de construcción multiplataforma
├── COMPILAR_WINDOWS.bat
├── Makefile
└── README.md
```

## Datos de ejemplo

La carpeta `datos/` incluye ciudades colombianas (Bogotá, Medellín, Cali, etc.), pasajeros y rutas de muestra. La aplicación carga estos datos automáticamente al iniciar.

## Licencia

Este proyecto está bajo la licencia MIT. Ver el archivo `LICENSE` para más detalles.

---

**Desarrollado por Santiago Ramirez y Deiver Monsalve**  
Proyecto académico de Estructura de Datos — 2026
