#pragma once
#include "Usuario.h"

using namespace System;
<<<<<<< HEAD

namespace RobotBibliotecaModel {

=======
namespace RobotBibliotecaModel {
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8
	public ref class SeguimientoPrestamo {
	private:
		int idSeguimentoPrestamo;
		int VencimientoPrestamoHoras;
		int RenovacionPrestamoHoras;
		String^ nombre;
		int numerodesolicitud;
		Usuario^ ObjUsuario;
	public:
		SeguimientoPrestamo();
		SeguimientoPrestamo(int idSeguimentoPrestamo, int VencimientoPrestamoHoras, int RenovacionPrestamoHoras, String^ nombre, int numerodesolicitud, Usuario^ ObjUsuario);
		int getidSeguimientoPrestamo();
		void setidSeguimientoPrestamo(int idSeguimientoPrestamo);
		int getVencimientoPrestamoHoras();
		void setVencimientoPrestamoHoras(int VencimientoPrestamoHoras);
		int getRenovacionPrestamoHoras();
		void setRenovacionPrestamoHoras(int RenovacionPrestamoHoras);
		String^ getnombre();
		void setnombre(String^ nombre);
		int getnumerodesolicitud();
		void setnumerodesolicitud(int numerodesolicitud);
		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ ObjUsuario);

	};
}

