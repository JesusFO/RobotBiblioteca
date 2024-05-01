#include "SolicitudPrestamo.h"

using namespace RobotBibliotecaModel;

SolicitudPrestamo::SolicitudPrestamo() {

}


SolicitudPrestamo::SolicitudPrestamo(int idSolicitudPrestamo, int cantLibros, int pesoLibros, int numeroSolicitud, int diasPrestamo, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega, ValidacionSolicitud^ objValidacionSolicitud, Libro^ objLibro, DetalleEntrega^ objDetalleEntrega) {

	this->idSolicitudPrestamo = idSolicitudPrestamo;
	this->cantLibros = cantLibros;
	this->pesoLibros = pesoLibros;
	this->numeroSolicitud = numeroSolicitud;
	this->diasPrestamo = diasPrestamo;
	this->fechaDevolucion = fechaDevolucion;
	this->horaDevolucion = horaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;
	this->objValidacionSolicitud = objValidacionSolicitud;
	this->objLibro = objLibro;
	this->objDetalleEntrega = objDetalleEntrega;

}

// GET - SET

int SolicitudPrestamo::getIdSolicitudPrestamo() {
	return this->idSolicitudPrestamo;
}

void SolicitudPrestamo::setIdSolicitudPrestamo(int idSolicitudPrestamo) {
	this->idSolicitudPrestamo = idSolicitudPrestamo;
}

int SolicitudPrestamo::getCantLibros() {
	return this->cantLibros;
}

void SolicitudPrestamo::setCantLibros(int cantLibros) {
	this->cantLibros = cantLibros;
}

int SolicitudPrestamo::getPesoLibros() {
	return this->pesoLibros;
}

void SolicitudPrestamo::setPesoLibros(int pesoLibros) {
	this->pesoLibros = pesoLibros;
}

int SolicitudPrestamo::getNumeroSolicitud() {
	return this->numeroSolicitud;
}

void SolicitudPrestamo::setNumeroSolicitud(int numeroSolicitud) {
	this->numeroSolicitud = numeroSolicitud;
}

int SolicitudPrestamo::getDiasPrestamo() {
	return this->diasPrestamo;
}

void SolicitudPrestamo::setDiasPrestamo(int diasPrestamo) {
	this->diasPrestamo = diasPrestamo;
}

String^ SolicitudPrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}

void SolicitudPrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this->fechaDevolucion = fechaDevolucion;
}

String^ SolicitudPrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}

void SolicitudPrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this->horaDevolucion = horaDevolucion;
}

String^ SolicitudPrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}

void SolicitudPrestamo::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ SolicitudPrestamo::getHoraEntrega() {
	return this->horaEntrega;
}

void SolicitudPrestamo::setHoraEntrega(String^ horaEntrega) {
	this->horaEntrega = horaEntrega;
}

ValidacionSolicitud^ SolicitudPrestamo::getObjValidacionSolicitud() {
	return this->objValidacionSolicitud;
}

void SolicitudPrestamo::setObjValidacionSolicitud(ValidacionSolicitud^ objValidacionSolicitud) {
	this->objValidacionSolicitud = objValidacionSolicitud;
}

Libro^ SolicitudPrestamo::getObjLibro() {
	return this->objLibro;
}

void SolicitudPrestamo::setObjLibro(Libro^ objLibro) {
	this->objLibro = objLibro;
}

DetalleEntrega^ SolicitudPrestamo::getObjDetalleEntrega() {
	return this->objDetalleEntrega;
}

void SolicitudPrestamo::setObjDetalleEntrega(DetalleEntrega^ objDetalleEntrega) {
	this->objDetalleEntrega = objDetalleEntrega;
}