#pragma once

using namespace System;

namespace RobotBibliotecaModel {
<<<<<<< HEAD

=======
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8
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
		Microcontrolador(int idMicrocontrolador, int NumeroDeSerie, int CantPines, String^ Fabricante, String^ nombre, String^ Datasheet);
		int getidMicrocontrolador();
		void setidMicrocontrolador(int idMicrocontrolador);
		int getNumeroDeSerie();
		void setNumeroDeSerie(int NumeroDeSerie);
		int getCantPines();
		void setCantPines(int CantPines);
		String^ getFabricante();
		void setFabricante(String^ Fabricante);
		String^ getnombre();
		void setnombre(String^ nombre);
		String^ getDatasheet();
		void setDatasheet(String^ Datasheet);
	};
}