#pragma once

#include "DatosPrestamo.h"
#include "Usuario.h"

using namespace System;

namespace RobotBooks_G6_Model {

	public ref class ConstanciaDePrestamo : DatosPrestamo {
	private:
		int idConstanciaDePrestamo;
		int idlibros;
		Usuario^ objUsuario;

	public:

		//Constructores
		ConstanciaDePrestamo();
		ConstanciaDePrestamo(int idConstanciaDePrestamo, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, int pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		//Propiedades GET SET
		int ConstanciaDePrestamo::getIdConstanciaDePrestamo() {
			return this->idConstanciaDePrestamo;
		}
		void ConstanciaDePrestamo::setIdConstanciaDePrestamo(int idConstanciaDePrestamo) {
			this idConstanciaDePrestamo->idConstanciaDePrestamo;
		}

		int ConstanciaDePrestamo::getIdlibros() {
			return this->idlibros;
		}
		void ConstanciaDePrestamo::setIdlibros(int idlibros) {
			this idlibros->idlibros;
		}
		Usuario^ ConstanciaDePrestamo::getObjUsuario() {
			return this->objUsuario;
		}
		void ConstanciaDePrestamo::setObjUsuario(Usuario^ objUsuario) {
			this objUsuario->objUsuario;
		}




		int ConstanciaDePrestamo::getIdDatosPrestamo() {
			return this->idDatosPrestamo;
		}
		void ConstanciaDePrestamo::setIdDatosPrestamo(int idDatosPrestamo) {
			this idDatosPrestamo->idDatosPrestamo;
		}
		int ConstanciaDePrestamo::getCantLibros() {
			return this->cantLibros;
		}
		void ConstanciaDePrestamo::setCantLibros(int cantLibros) {
			this cantLibros->cantLibros;
		}
		int ConstanciaDePrestamo::getPesoLibros() {
			return this->pesoLibros;
		}
		void ConstanciaDePrestamo::setPesoLibros(int pesoLibros) {
			this pesoLibros->pesoLibros;
		}

		String^ ConstanciaDePrestamo::getFechaDevolucion() {
			return this->fechaDevolucion;
		}
		void ConstanciaDePrestamo::setFechaDevolucion(String^ fechaDevolucion) {
			this fechaDevolucion->fechaDevolucion;
		}
		String^ ConstanciaDePrestamo::getHoraDevolucion() {
			return this->horaDevolucion;
		}
		void ConstanciaDePrestamo::setHoraDevolucion(String^ horaDevolucion) {
			this horaDevolucion->horaDevolucion;
		}
		String^ ConstanciaDePrestamo::getFechaEntrega() {
			return this->fechaEntrega;
		}
		void ConstanciaDePrestamo::setFechaEntrega(String^ fechaEntrega) {
			this fechaEntrega->fechaEntrega;
		}
		String^ ConstanciaDePrestamo::getHoraEntrega() {
			return this->horaEntrega;
		}
		void ConstanciaDePrestamo::setHoraEntrega(String^ horaEntrega) {
			this horaEntrega->horaEntrega;
		}


	};

}

