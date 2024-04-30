#include "ConstanciaDePrestamo.h"

using namespace RobotBooks_G6_Model;

ConstanciaDePrestamo::ConstanciaDePrestamo() {

}

ConstanciaDePrestamo::ConstanciaDePrestamo(int idConstanciaDePrestamo, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, int pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) {
	this->idConstanciaDePrestamo = idConstanciaDePrestamo;
	this->idlibros = idlibros;
	this->objUsuario = objUsuario;
	this->idDatosPrestamo = idDatosPrestamo;
	this->cantLibros = cantLibros;
	this->fechaDevolucion = fechaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;
}