#pragma once

using namespace System;

public ref class Biblioteca {

private:
	int idBiblioteca;
	String^ direccion;
	String^ nombre;
	String^ horarioAtencion;
	String^ registrosPrestamo;

public:
	// M�todos
	Biblioteca();
	Biblioteca(int idBiblioteca, String^ nombre, String^ nombre, String^ horarioAtencion, String^ registrosPrestamo);

};