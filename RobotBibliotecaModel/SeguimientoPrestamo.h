#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBooks_G6_Model {

	public ref class SeguimientoPrestamo {

		private:
			int idSeguimentoPrestamo;
			int VencimientoPrestamoHoras;
			int RenovacionPrestamoHoras;
			String^ string;
			int numerodesolicitud;
			Usuario^ ObjUsuario;
		public:
			SeguimientoPrestamo();
			SeguimientoPrestamo(int idSeguimentoPrestamo, int VencimientoPrestamoHoras, int RenovacionPrestamoHoras, String^ string, int numerodesolicitud, Usuario^ ObjUsuario);

	};
}


