#pragma once
#include "Robot.h"
#include "ConstanciaDePrestamo.h"
#include "ValoracionEntrega.h"
#include "SeguimientoPrestamo.h"

using namespace System;
namespace RobotBibliotecaModel {
<<<<<<< HEAD

	public ref class DetalleEntrega {

		private:
			int idEntrega;
			String^ DeclaracionPrestamo;
			String^ UbicacionCampus;
			SeguimientoPrestamo^ ObjSeguimientoPrestamo;
			ValoracionEntrega^ ObjValoracionEntrega;
			Robot^ ObjRobot;
			ConstanciaDePrestamo^ ObjConstanciaDePrestamo;
		public:
			DetalleEntrega();
			DetalleEntrega(int idEntrega,String^ DeclaracionPrestamo,String^ UbicacionCampus,SeguimientoPrestamo^ ObjSeguimientoPrestamo,ValoracionEntrega^ ObjValoracionEntrega,Robot^ ObjRobot,ConstanciaDePrestamo^ ObjConstanciaDePrestamo);
=======
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
		//BobsConstructor
		DetalleEntrega();
		DetalleEntrega(int idEntrega, String^ DeclaracionPrestamo, String^ UbicacionCampus, SeguimientoPrestamo^ ObjSeguimiento, ValoracionEntrega^ ObjValoracion, Robot^ ObjRobot, ConstanciaDePrestamo^ ObjConstancia);
		//Get(ObtenerValor) - Set (DarValor)
		//idEntrega
		int getidEntrega();
		void setidEntrega(int idEntrega);
		//DeclaracionPrestamo
		String^ getDeclaracionPrestamo();
		void setDeclaracionPrestamo(String^ DeclaracionPrestamo);
		//UbicacionCampus
		String^ getUbicacionCampus();
		void setUbicacionCampus(String^ UbicacionCampus);
		//ObjSeguimiento
		SeguimientoPrestamo^ getObjSeguimiento();
		void setObjSeguimiento(SeguimientoPrestamo^ ObjSeguimiento);
		//ObjValoracion
		ValoracionEntrega^ getObjValoracion();
		void setObjValoracion(ValoracionEntrega^ ObjValoracion);
		//ObjRobot
		Robot^ getObjRobot();
		void setObjRobot(Robot^ ObjRobot);
		//ConstanciaDePrestamo
		ConstanciaDePrestamo^ getObjConstancia();
		void setObjConstancia(ConstanciaDePrestamo^ ObjConstancia);
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8

	};
}