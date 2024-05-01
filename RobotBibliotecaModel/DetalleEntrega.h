#pragma once
#include "Robot.h"
#include "ConstanciaDePrestamo.h"
#include "ValoracionEntrega.h"
#include "SeguimientoPrestamo.h"

using namespace System;
namespace RobotBooks_G6_Model {

	public ref class DetalleEntrega {

		private:
			int idEntrega;
			String^ DeclaracionPrestamo;
			String^ UbicacionCampus;
			SeguimientoPrestamo^ ObjSeguimiento;
			ValoracionEntrega^ ObjValoracion;
			Robot^ ObjRobot;
			ConstanciaDePrestamo^ ObjConstancia;
		public:
			DetalleEntrega();
			DetalleEntrega(int idEntrega,String^ DeclaracionPrestamo,String^ UbicacionCampus,SeguimientoPrestamo^ ObjSeguimiento,ValoracionEntrega^ ObjValoracion,Robot^ ObjRobot,ConstanciaDePrestamo^ ObjConstancia);

	};
}