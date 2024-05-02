#include "ConstanciaDePrestamo.h"

using namespace RobotBibliotecaModel;

ConstanciaDePrestamo::ConstanciaDePrestamo() : DatosPrestamo(){

}


ConstanciaDePrestamo::ConstanciaDePrestamo(int idConstanciaDePrestamo, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, int pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) : DatosPrestamo(idDatosPrestamo, cantLibros, pesoLibros, fechaDevolucion, horaDevolucion, fechaEntrega, horaEntrega) {
	this->idConstanciaDePrestamo = idConstanciaDePrestamo;
	this->idlibros = idlibros;
	this->objUsuario = objUsuario;
}
