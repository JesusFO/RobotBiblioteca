#include "DatosPrestamo.h"

using namespace RobotBibliotecaModel;

DatosPrestamo::DatosPrestamo() {

}

DatosPrestamo::DatosPrestamo(int idDatosPrestam, int cantLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) {

	this->idDatosPrestam = idDatosPrestam;
	this->cantLibros = cantLibros;
	this->fechaDevolucion = fechaDevolucion;
	this->horaDevolucion = horaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;

}

// Propiedades GET - SET
int DatosPrestamo::getIdDatosPrestamo() {
	return this->idDatosPrestam;
}

void DatosPrestamo::setIdDatosPrestamo(int idDatosPrestamo) {
	this->idDatosPrestam = idDatosPrestamo;
}

int DatosPrestamo::getCantLibros() {
	return this->cantLibros;
}

void DatosPrestamo::setCantLibros(int cantLibros) {
	this->cantLibros = cantLibros;
}

String^ DatosPrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}

void DatosPrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this->fechaDevolucion = fechaDevolucion;
}

String^ DatosPrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}

void DatosPrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this->horaDevolucion = horaDevolucion;
}

String^ DatosPrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}

void DatosPrestamo::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ DatosPrestamo::getHoraEntrega() {
	return this->horaEntrega;
}

void DatosPrestamo::setHoraEntrega(String^ horaEntrega) {
	this->horaEntrega = horaEntrega;
}