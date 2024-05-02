#pragma once

#include "Usuario.h"
#include "IngresoDatos.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class Registro : IngresoDatos {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contrase�a;
		String^ fecha;
		Usuario^ objUsuario;

	public:
		Registro();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contrase�a, String^ fecha, Usuario^ objUsuario, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int getIdRegistro();
		void setIdRegistro(int idRegistro);
		String^ getDireccion();
		void setDireccion(String^ Direccion);
		String^ getDNI();
		void setDNI(String^ DNI);
		String^ getContrase�a();
		void setContrase�a(String^ Contrase�a);
		String^ getFecha();
		void setFecha(String^ HoraNotificacion);
		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);
		int getIdIngreso();
		void setIdIngreso(int idIngreso);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getCorreo();
		void setCorreo(String^ correo);
		String^ getDNI();
		void setCuenta(String^ cuenta);
		String^ getTelefono();
		void setTelefono(String^ telefono);

	};

}