#include "interfaz.h"
#include <sstream>
extern bool interfazGraficaActiva;
Ciudad* ciudadesGUI = NULL;
Pasajero* pasajerosGUI = NULL;
Cola colaGUI = {NULL, NULL, 1};
Historial* historialGUI = NULL;
// Cada accion consume solo sus propios campos; un error no ejecuta otras acciones.
std::string ejecutarAccion(int modulo, int accion, const std::string& campos) {
    std::istringstream entrada(campos);
    std::ostringstream salida;
    std::streambuf* antesEntrada = std::cin.rdbuf(entrada.rdbuf());
    std::streambuf* antesSalida = std::cout.rdbuf(salida.rdbuf());
    std::cin.clear(); interfazGraficaActiva = true;
    switch(modulo) {
      case 0: interfaz_ciudades(ciudadesGUI, accion); break;
      case 1: interfaz_rutas(ciudadesGUI, accion); break;
      case 2: interfaz_pasajeros(pasajerosGUI, accion); break;
      case 3: interfaz_cola(colaGUI, ciudadesGUI, pasajerosGUI, historialGUI, accion); break;
      case 4: interfaz_historial(historialGUI, accion); break;
      case 5: interfaz_busquedas(ciudadesGUI, pasajerosGUI, colaGUI, historialGUI, accion); break;
      case 6: interfaz_reportes(ciudadesGUI, pasajerosGUI, colaGUI, historialGUI, accion); break;
      case 7: interfaz_archivos(ciudadesGUI, pasajerosGUI, colaGUI, historialGUI, accion); break;
    }
    interfazGraficaActiva = false;
    std::cin.rdbuf(antesEntrada); std::cin.clear();
    std::cout.rdbuf(antesSalida);
    return salida.str();
}
void cerrarSistema() {
    liberarCiudades(ciudadesGUI); liberarPasajeros(pasajerosGUI);
    liberarCola(colaGUI); liberarHistorial(historialGUI);
}
