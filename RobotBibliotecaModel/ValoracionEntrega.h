#pragma once
#include "Usuario.h"
using namespace System;
namespace RobotBooks_G6_Model {
	public ref class ValoracionEntrega {
		private:
			int idValoracion;
			String^ comentario;
			int puntuacion;
			Usuario^ ObjUsuario;
		public:
			ValoracionEntrega();
			ValoracionEntrega(int idValoracionString^ comentario,int puntuacion,Usuario^ ObjUsuario);
	};	

}