#pragma once
#include "Usuario.h"
using namespace System;
namespace RobotBibliotecaModel {
	public ref class ValoracionEntrega {
<<<<<<< HEAD

		private:
			int idValoracion;
			String^ comentario;
			int puntuacion;
			Usuario^ ObjUsuario;
		public:
			ValoracionEntrega();
			ValoracionEntrega(int idValoracion,String^ comentario,int puntuacion,Usuario^ ObjUsuario);
	};	
=======
	private:
		int idValoracion;
		String^ comentario;
		int puntuacion;
		Usuario^ ObjUsuario;
	public:
		//Bob
		ValoracionEntrega();
		ValoracionEntrega(int idValoracion, String^ comentario, int puntuacion, Usuario^ ObjUsuario);
		//get set
		int getidValoracion();
		void setidValoracion(int idValoracion);
		String^ getcomentario();
		void setcomentraio(String^ comentario);
		int getpuntuacion();
		void setpuntuacion(int puntuacion);
		Usuario^ getObjUsuario();
		void setUsuario(Usuario^ ObjUsuario);
	};
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8

}