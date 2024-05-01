#pragma once

using namespace System;

public ref class Libro {

private:
	int idLibro;
	String^ titulo;
	String^ categoria;
	String^ estado;
	int edicion;
	String^ rese�a;
	String^ etiqueta;
	String^ autorLibro;
	String^ disponibilidad;

public:
	Libro();
	Libro(int idLibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ rese�a, String^ etiqueta, String^ autorLibro, String^ disponibilidad);
};