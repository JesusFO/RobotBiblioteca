/**
 * Project: Robot Biblioteca
 */


#ifndef _LIBRO_H
#define _LIBRO_H

using namespace System;

namespace RobotBibliotecaModel {
    public ref class Libro {
    public:
        property int IdLibro;
        property String^ Titulo;
        property String^ Categoria;
        property String^ Estado;
        property int Edicion;
        property String^ Resena;
        property String^ Etiqueta;
        property String^ AutorLibro;
        property String^ Disponibilidad;

        Libro() {};
        Libro( int idlibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ resena, String^ etiqueta, String^ autorLibro, String^ disponibilidad) {
            Titulo = titulo;
            Categoria = categoria;
            Estado = estado;
            Edicion = edicion;
            Resena = resena;
            Etiqueta = etiqueta;
            AutorLibro = autorLibro;
            Disponibilidad = disponibilidad;
        };
    };
}
#endif //_LIBRO_H