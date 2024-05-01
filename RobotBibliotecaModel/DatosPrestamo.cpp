#include "DatosPrestamo.h"

using namespace RobotBibliotecaModel;

DatosPrestamo::DatosPrestamo() {

}

DatosPrestamo::DatosPrestamo(int idDatosPrestamo, int cantLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) {

	this->idDatosPrestamo = idDatosPrestamo;
	this->cantLibros = cantLibros;
	this->fechaDevolucion = fechaDevolucion;
	this->horaDevolucion = horaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;

}

// Propiedades GET - SET
int DatosPrestamo::getIdDatosPrestamo() {
	return this->idDatosPrestamo;
}

void DatosPrestamo::setIdDatosPrestamo(int idDatosPrestamo) {
	this->idDatosPrestamo = idDatosPrestamo;
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