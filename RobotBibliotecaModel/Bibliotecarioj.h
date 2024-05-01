#pragma once

using namespace System;

public ref class Bibliotecario {

private:
	int idBibliotecario;
	String^ nombre;
	String^ disponibilidad;

public:
	Bibliotecario();
	Bibliotecario(int idBibliotecario, String^ nombre, String^ disponibilidad);

};