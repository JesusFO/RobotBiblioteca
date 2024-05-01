#pragma once
#include "Robot.h"
#include "SolicitudMantenimiento"
using namespace System::Collections::Generic;
namespace RobotBooks_G6_Model {

	public ref class Mantenimiento {

		private:
			int idMantenimiento;
			String^ NombreDelResponsable;
			List<SolicitudMantenimiento^>^ listaMantenimiento;
		public:
			Mantenimiento();
			Mantenimiento(int idMantenimiento,
			String^ NombreDelResponsable,
			List<SolicitudMantenimiento^>^ listaMantenimiento);
	};
}