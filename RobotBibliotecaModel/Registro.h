#pragma once

#include "Usuario.h"
#include "IngresoDatos.h"

using namespace System;

namespace RobotBooks_G6_Model {

	public ref class Usuario : IngresoDatos {
	private:
		int idRegistro;
		String^ Direccion;
		String^ DNI;
		String^ Contraseña;
		String^ fecha;
		Usuario^ objUsuario;

	public:
		Usuario();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseña, String^ fecha, Usuario^ objUsuario, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int Usuario::getIdRegistro() {
			return this->idRegistro;
		}
		void Usuario::setIdRegistro(int idRegistro) {
			this idRegistro->idRegistro;
		}

		String^ Usuario::getDireccion() {
			return this->Direccion;
		}
		void Usuario::setDireccion(String^ Direccion) {
			this Direccion->Direccion;
		}
		String^ Usuario::getDNI() {
			return this->DNI;
		}
		void Usuario::setDNI(String^ DNI) {
			this DNI->DNI;
		}

		String^ Usuario::getContraseña() {
			return this->Contraseña;
		}
		void Usuario::setContraseña(String^ Contraseña) {
			this Contraseña->Contraseña;
		}
		String^ Usuario::getFecha() {
			return this->fecha;
		}
		void Usuario::setFecha(String^ HoraNotificacion) {
			this fecha->fecha;
		}
		Usuario^ Usuario::getObjUsuario() {
			return this->objUsuario;
		}
		void Usuario::setObjUsuario(Usuario^ objUsuario) {
			this objUsuario->objUsuario;
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

	};

}