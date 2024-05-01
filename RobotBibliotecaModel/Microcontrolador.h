#pragma once

using namespace System;

namespace RobotBooks_G6_Model {
	public ref class Microcontrolador {
	private:
		int idMicrocontrolador;
		int NumeroDeSerie;
		int CantPines;
		String^ Fabricante;
		String^ nombre;
		String^ Datasheet;
	public:
		Microcontrolador();
		Microcontrolador(int idMicrocontrolador,int NumeroDeSerie,int CantPines,String^ Fabricante,	String^ nombre,String^ Datasheet);
	};
}