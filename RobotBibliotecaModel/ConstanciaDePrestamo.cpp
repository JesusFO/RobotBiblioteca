#include "ConstanciaDePrestamo.h"

using namespace RobotBibliotecaModel;

ConstanciaDePrestamo::ConstanciaDePrestamo() {

}

ConstanciaDePrestamo::ConstanciaDePrestamo(int idConstanciaDePrestamo, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, int pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) {
	this->idConstanciaDePrestamo = idConstanciaDePrestamo;
	this->idlibros = idlibros;
	this->objUsuario = objUsuario;
	this->idDatosPrestamo = idDatosPrestamo;
	this->cantLibros = cantLibros;
	this->fechaDevolucion = fechaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;
}

int ConstanciaDePrestamo::getIdDatosPrestamo() {
	return this->idDatosPrestamo;
}
void ConstanciaDePrestamo::setIdDatosPrestamo(int idDatosPrestamo) {
	this idDatosPrestamo->idDatosPrestamo;
}
int ConstanciaDePrestamo::getCantLibros() {
	return this->cantLibros;
}
void ConstanciaDePrestamo::setCantLibros(int cantLibros) {
	this cantLibros->cantLibros;
}
int ConstanciaDePrestamo::getPesoLibros() {
	return this->pesoLibros;
}
void ConstanciaDePrestamo::setPesoLibros(int pesoLibros) {
	this pesoLibros->pesoLibros;
}

String^ ConstanciaDePrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}
void ConstanciaDePrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this fechaDevolucion->fechaDevolucion;
}
String^ ConstanciaDePrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}
void ConstanciaDePrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this horaDevolucion->horaDevolucion;
}
String^ ConstanciaDePrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}
void ConstanciaDePrestamo::setFechaEntrega(String^ fechaEntrega) {
	this fechaEntrega->fechaEntrega;
}
String^ ConstanciaDePrestamo::getHoraEntrega() {
	return this->horaEntrega;
}
void ConstanciaDePrestamo::setHoraEntrega(String^ horaEntrega) {
	this horaEntrega->horaEntrega;
}