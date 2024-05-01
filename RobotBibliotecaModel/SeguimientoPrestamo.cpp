#include "SeguimientoPrestamo.h"
#include "Usuario.h"

using namespace RobotBibliotecaModel;
using namespace System;

SeguimientoPrestamo::SeguimientoPrestamo(){}

SeguimientoPrestamo::SeguimientoPrestamo(int idSeguimentoPrestamo, int VencimientoPrestamoHoras, int RenovacionPrestamoHoras, String^ string, int numerodesolicitud, Usuario^ ObjUsuario) {

	this->idSeguimentoPrestamo = idSeguimentoPrestamo;
	this->VencimientoPrestamoHoras = VencimientoPrestamoHoras;
	this->RenovacionPrestamoHoras = RenovacionPrestamoHoras;
	this->nombre = nombre;
	this->numerodesolicitud = numerodesolicitud;
	this->ObjUsuario = ObjUsuario;
}
int SeguimientoPrestamo::getidSeguimientoPrestamo() {
	return this->idSeguimientoPrestamo;
}
void SeguimientoPrestamo::setidSeguimientoPrestamo(int idSeguimientoPrestamo) {
	this->idSeguimientoPrestamo = idSeguimientoPrestamo;
}
int SeguimientoPrestamo::getVencimientoPrestamoHoras() {
	return this->VencimientoPrestamoHoras;
}
void SeguimientoPrestamo::setVencimientoPrestamoHoras(int VencimientoPrestamoHoras) {
	this->VencimientoPrestamoHoras = VencimientoPrestamoHoras;
}
int SeguimientoPrestamo::getRenovacionPrestamoHoras() {
	return this->RenovacionPrestamoHoras;
}
void SeguimientoPrestamo::setRenovacionPrestamoHoras(int RenovacionPrestamoHoras) {
	this->RenovacionPrestamoHoras = RenovacionPrestamoHoras;
}
String^ SeguimientoPrestamo::getnombre() {
	return this->nombre;
}
void SeguimientoPrestamo::setnombre(String^ nombre) {
	this->nombre = nombre;
}
int SeguimientoPrestamo::getnumerodesolicitud() {
	return this->numerodesolicitud;
}
void SeguimientoPrestamo::setnumerodesolicitud(int numerodesolicitud) {
	this->numerodesolicitud = numerodesolicitud;
}
Usuario^ SeguimientoPrestamo::getObjUsuario() {
	return this->ObjUsuario;
}
void SeguimientoPrestamo::setObjUsuario(Usuario^ ObjUsuario) {
	this->ObjUsuario = ObjUsuario;
}