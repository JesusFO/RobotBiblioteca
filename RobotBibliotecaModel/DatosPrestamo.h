#pragma once

using namespace System;

namespace RobotBibliotecaModel {

	public ref class DatosPrestamo {

	private:

		int idDatosPrestamo;
		int cantLibros;
		int pesoLibros;
		String^ fechaDevolucion;
		String^ horaDevolucion;
		String^ fechaEntrega;
		String^ horaEntrega;

	public:

		// Constructores
		DatosPrestamo();
		DatosPrestamo(int idDatosPrestamo, int cantLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		// Propiedades GET - SET
		int getIdDatosPrestamo();
		void setIdDatosPrestamo(int idDatosPrestamo);

		int getCantLibros();
		void setCantLibros(int cantLibros);

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