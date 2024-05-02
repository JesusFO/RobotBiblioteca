#pragma once
#include "Robot.h"
#include "SolicitudMantenimiento"
using namespace System::Collections::Generic;
namespace RobotBibliotecaModel {
<<<<<<< HEAD

=======
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8
	public ref class Mantenimiento {
	private:
		int idMantenimiento;
		String^ NombreDelResponsable;
		List<SolicitudMantenimiento^>^ listaMantenimiento;
	public:
		Mantenimiento();
		Mantenimiento(int idMantenimiento, String^ NombreDelResponsable, List<SolicitudMantenimiento^>^ listaMantenimiento);
		int getidMantenimiento();
		void setidMantenimiento(int idMantenimiento);
		String^ getNombreDelResponsable();
		void setNombreDelResponsable(String^ NombreDelResponsable);
		List<SolicitudMantenimiento^>^ getlistaMantenimiento();
		void setlistaMantenimiento(List<SolicitudMantenimiento^>^ listaMantenimiento);
	};
}