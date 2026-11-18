#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "archivos.h"
#include "rutas.h"
void interfaz_ciudades(Ciudad*& inicio, int opcion);
void interfaz_rutas(Ciudad* inicio, int opcion);
void interfaz_pasajeros(Pasajero*& inicio, int opcion);
void interfaz_cola(Cola& cola, Ciudad* ciudades, Pasajero* pasajeros, Historial*& historial, int opcion);
void interfaz_historial(Historial* inicio, int opcion);
void interfaz_busquedas(Ciudad* ciudades, Pasajero* pasajeros, const Cola& cola, Historial* historial, int opcion);
void interfaz_reportes(Ciudad* ciudades, Pasajero* pasajeros, const Cola& cola, Historial* historial, int opcion);
void interfaz_archivos(Ciudad*& ciudades, Pasajero*& pasajeros, Cola& cola, Historial*& historial, int opcion);
std::string ejecutarAccion(int modulo, int accion, const std::string& campos);
void cerrarSistema();
extern Ciudad* ciudadesGUI;
extern Pasajero* pasajerosGUI;
extern Cola colaGUI;
extern Historial* historialGUI;
#endif
