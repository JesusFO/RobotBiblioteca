#include "Registro.h"

using namespace RobotBibliotecaModel;

Registro::Registro(): IngresoDatos() {

}

Registro::Registro(int idRegistro, String^ direccion, String^ DNI, String^ contrase�a, String^ fecha, Usuario^ objUsuario, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono): IngresoDatos( idIngreso, codigo, correo,  cuenta, telefono) {
	
	this->idRegistro = idRegistro;
	this->direccion = direccion;
	this->DNI = DNI;
	this->contrase�a = contrase�a;
	this->fecha = fecha;
	this->objUsuario = objUsuario;
}

/*int Registro::getIdRegistro() {
	return this->idRegistro;
}
void Registro::setIdRegistro(int idRegistro) {
	this->idRegistro=idRegistro;
}

String^ Registro::getDireccion() {
	return this->direccion;
}
void Registro::setDireccion(String^ direccion) {
	this->direccion=direccion;
}
String^ Registro::getDNI() {
	return this->DNI;
}
void Registro::setDNI(String^ DNI) {
	this->DNI=DNI;
}

String^ Registro::getContrase�a() {
	return this->contrase�a;
}
void Registro::setContrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
}
String^ Registro::getFecha() {
	return this->fecha;
}
void Registro::setFecha(String^ HoraNotificacion) {
	this->fecha = fecha;
}
Usuario^ Registro::getObjUsuario() {
	return this->objUsuario;
}
void Registro::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}

int Registro::getIdIngreso() {
	return this->idIngreso;
}
void Registro::setIdIngreso(int idIngreso) {
	this->idIngreso = idIngreso;
}

int Registro::getCodigo() {
	return this->codigo;
}
void Registro::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Registro::getCorreo() {
	return this->correo;
}
void Registro::setCorreo(String^ correo) {
	this->correo = correo;
}
String^ Registro::getDNI() {
	return this->cuenta;
}
void Registro::setCuenta(String^ cuenta) {
	this->cuenta = cuenta;
}

String^ Registro::getTelefono() {
	return this->telefono;
}
void Registro::setTelefono(String^ telefono) {
	this->telefono = telefono;
}*/