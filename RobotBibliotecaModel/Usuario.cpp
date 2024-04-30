#include "Usuario.h"

using namespace RobotBooks_G6_Model;

Usuario::Usuario() {

}

Usuario::Usuario(int idUsuario, String^ nombreCompleto, String^ fechaRecojo, String^ direccion, String^ Estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono) {
	this->idUsuario = idUsuario;
	this->nombreCompleto = nombreCompleto;
	this->fechaRecojo = fechaRecojo;
	this->direccion = direccion;
	this->Estado = Estado;
	this->idIngreso = idIngreso;
	this->codigo = codigo;
	this->correo = correo;
	this->cuenta = cuenta;
	this->telefono = telefono;
}