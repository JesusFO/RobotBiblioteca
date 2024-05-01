#pragma once
#include "Microcontrolador.h"

using namespace System;
namespace RobotBooks_G6_Model {
	public ref class Robot {
		private:
			int idRobot;
			double Velocidad;
			int Bateria;
			double CapacidadCarga;
			double Dimensiones;
			Microcontrolador^ ObjMicrocontrolador;
		public:
			Robot();
			Robot(int idRobot,double Velocidad,	int Bateria,double CapacidadCarga,double Dimensiones,Microcontrolador^ ObjMicrocontrolador);
	};

}