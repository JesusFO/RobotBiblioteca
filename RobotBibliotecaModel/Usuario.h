#pragma once

#include "IngresoDatos.h"

using namespace System;

namespace RobotBooks_G6_Model {

	public ref class Usuario : IngresoDatos {
	private:
		int idUsuario;
		String^ nombreCompleto;
		String^ fechaRecojo;
		String^ direccion;
		String^ Estado;

	public:
		Usuario();
		Usuario(int idUsuario, String^ nombreCompleto, String^ fechaRecojo, String^ direccion, String^ Estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);
	};

	int Usuario::getIdUsuario() {
		return this->idUsuario;
	}
	void Usuario::setIdUsuario(int idUsuario) {
		this idUsuario->idUsuario;
	}

	String^ Usuario::getNombreCompleto() {
		return this->codigo;
	}
	void Usuario::setNombreCompleto(int nombreCompleto) {
		this nombreCompleto->nombreCompleto;
	}

	String^ Usuario::getFechaRecojo() {
		return this->fechaRecojo;
	}
	void Usuario::setFechaRecojo(String^ fechaRecojo) {
		this fechaRecojo->fechaRecojo;
	}
	String^ Usuario::getDireccion() {
		return this->direccion;
	}
	void Usuario::setDireccion(String^ direccion) {
		this direccion->direccion;
	}

	String^ Usuario::getEstado() {
		return this->Estado;
	}
	void Usuario::setEstado(String^ telefono) {
		this Estado->Estado;
	}

	int Usuario::getIdIngreso() {
		return this->idIngreso;
	}
	void Usuario::setIdIngreso(int idIngreso) {
		this idIngreso->idIngreso;
	}

	int Usuario::getCodigo() {
		return this->codigo;
	}
	void Usuario::setCodigo(int codigo) {
		this codigo->codigo;
	}

	String^ Usuario::getCorreo() {
		return this->correo;
	}
	void Usuario::setCorreo(String^ correo) {
		this correo->correo;
	}
	String^ Usuario::getDNI() {
		return this->cuenta;
	}
	void Usuario::setCuenta(String^ cuenta) {
		this cuenta->cuenta;
	}

	String^ Usuario::getTelefono() {
		return this->telefono;
	}
	void Usuario::setTelefono(String^ telefono) {
		this telefono->telefono;
	}


}