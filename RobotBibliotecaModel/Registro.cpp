#include "Registro.h"

using namespace RobotBooks_G6_Model;

Registro::Registro() {

}

Registro::Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contrase�a, String^ fecha, Usuario^ objUsuario, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono) {
	this->idRegistro = idRegistro;
	this->Direccion = Direccion;
	this->DNI = DNI;
	this->Contrase�a = Contrase�a;
	this->fecha = fecha;
	this->objUsuario = objUsuario;
	this->idIngreso = idIngreso;
	this->codigo = codigo;
	this->correo = correo;
	this->cuenta = cuenta;
	this->telefono = telefono;
}