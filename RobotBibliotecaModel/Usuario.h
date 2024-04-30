#pragma once

#include "IngresoDatos.h"

using namespace System;

namespace RobotBibliotecaModel {

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




}