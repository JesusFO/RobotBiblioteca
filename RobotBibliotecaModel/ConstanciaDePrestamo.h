#pragma once

#include "DatosPrestamo.h"
#include "Usuario.h"

using namespace System;

namespace RobotBibliotecaModel {

	public ref class ConstanciaDePrestamo : DatosPrestamo {
	private:
		int idConstanciaDePrestamo;
		int idlibros;
		Usuario^ objUsuario;

	public:

		//Constructores
		ConstanciaDePrestamo();
		ConstanciaDePrestamo(int idConstanciaDePrestamo, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, int pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		//Propiedades GET SET
		int getIdConstanciaDePrestamo();
		void setIdConstanciaDePrestamo(int idConstanciaDePrestamo);

		int getIdlibros();
		void setIdlibros(int idlibros);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

		int getIdDatosPrestamo();
		void setIdDatosPrestamo(int idDatosPrestamo);

		int getCantLibros();
		void setCantLibros(int cantLibros);

		int getPesoLibros();
		void setPesoLibros(int pesoLibros);

		String^ getFechaDevolucion();
		void setFechaDevolucion(String^ fechaDevolucion);

		String^ getHoraDevolucion();
		void setHoraDevolucion(String^ horaDevolucion);

		String^ getFechaEntrega();
		void setFechaEntrega(String^ fechaEntrega);

		String^ getHoraEntrega();
		void setHoraEntrega(String^ horaEntrega);

	};

}

