#include "SolicitudPrestamo.h"
#include "DatosPrestamo.h"

using namespace RobotBibliotecaModel;

SolicitudPrestamo::SolicitudPrestamo() : DatosPrestamo() {

}


SolicitudPrestamo::SolicitudPrestamo(int idSolicitudPrestamo, int cantLibros, int pesoLibros, int numeroSolicitud, int diasPrestamo, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega, ValidacionSolicitud^ objValidacionSolicitud, Libro^ objLibro, DetalleEntrega^ objDetalleEntrega) : DatosPrestamo(idDatosPrestamo,cantLibros,pesoLibros,fechaDevolucion,horaDevolucion,fechaEntrega,horaEntrega) {

	this->idSolicitudPrestamo = idSolicitudPrestamo;
	this->numeroSolicitud = numeroSolicitud;
	this->diasPrestamo = diasPrestamo;
	this->objValidacionSolicitud = objValidacionSolicitud;
	this->objLibro = objLibro;
	this->listaDetalle = listaDetalle;

}
