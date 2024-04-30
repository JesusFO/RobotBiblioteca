#pragma once
#include "DatosPrestamo.h"
#include "ValidacionSolicitud.h"
#include "Libro.h"
#include "DetalleEntrega.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RobotBibliotecaModel {

	public ref class SolicitudPrestamo : DatosPrestamo {

	private:

		int idSolicitudPrestamo;
		int cantLibros;
		int pesoLibros;
		int numeroSolicitud;
		int diasPrestamo;
		ValidacionSolicitud^ objValidacionSolicitud;
		Libro^ objLibro;
		List<DetalleEntrega^>^ listaDetalle;

	public:

		SolicitudPrestamo();
		SolicitudPrestamo(int idSolicitudPrestamo, int cantLibros, int pesoLibros, int numeroSolicitud, int diasPrestamo, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega, ValidacionSolicitud^ objValidacionSolicitud, Libro^ objLibro, DetalleEntrega^ objDetalleEntrega);

		// GET - SET

		int getIdSolicitudPrestamo();
		void setIdSolicitudPrestamo(int idSolicitudPrestamo);

		int getCantLibros();
		void setCantLibros(int cantLibros);

		int getPesoLibros();
		void setPesoLibros(int pesoLibros);

		int getNumeroSolicitud();
		void setNumeroSolicitud(int numeroSolicitud);

		int getDiasPrestamo();
		void setDiasPrestamo(int diasPrestamo);

		String^ getFechaDevolucion();
		void setFechaDevolucion(String^ fechaDevolucion);

		String^ getHoraDevolucion();
		void setHoraDevolucion(String^ horaDevolucion);

		String^ getFechaEntrega();
		void setFechaEntrega(String^ fechaEntrega);

		String^ getHoraEntrega();
		void setHoraEntrega(String^ horaEntrega);

		ValidacionSolicitud^ getObjValidacionSolicitud();
		void setObjValidacionSolicitud(ValidacionSolicitud^ objValidacionSolicitud);

		Libro^ getObjLibro();
		void setObjLibro(Libro^ objLibro);

		DetalleEntrega^ getObjDetalleEntrega();
		void setObjDetalleEntrega(DetalleEntrega^ objDetalleEntrega);
	};

}