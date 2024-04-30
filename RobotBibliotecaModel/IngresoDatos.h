#pragma once

using namespace System;

namespace RobotBooks_G6_Model {

	public ref class IngresoDatos {
	private:
		int idIngreso;
		int codigo;
		String^ correo;
		String^ cuenta;
		String^ telefono;

	public:
		IngresoDatos();
		IngresoDatos(int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int IngresoDatos::getIdIngreso() {
			return this->idIngreso;
		}
		void IngresoDatos::setIdIngreso(int idIngreso) {
			this idIngreso->idIngreso;
		}

		int IngresoDatos::getCodigo() {
			return this->codigo;
		}
		void IngresoDatos::setCodigo(int codigo) {
			this codigo->codigo;
		}
		String^ IngresoDatos::getCorreo() {
			return this->correo;
		}
		void IngresoDatos::setCorreo(String^ correo) {
			this correo->correo;
		}

		String^ IngresoDatos::getCuenta() {
			return this->cuenta;
		}
		void IngresoDatos::setCuenta(String^ cuenta) {
			this cuenta->cuenta;
		}
		String^ IngresoDatos::getTelefono() {
			return this->telefono;
		}
		void IngresoDatos::setTelefono(String^ telefono) {
			this telefono->telefono;
		}
	};

}
