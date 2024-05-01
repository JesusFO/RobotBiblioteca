/**
 * Project: Robot Biblioteca
 */


#ifndef _LIBRO_H
#define _LIBRO_H

using namespace System;

namespace SalesSystemModel {
    public ref class Libro {
    private:
        property int idLibro;
        property String^ titulo;
        property String^ idlibro;
        property String^ categoria;
        property String^ estado;
        property int edicion;
        property String^ reseña;
        property String^ etiqueta;
        property String^ AutorLibro;
        property String^ disponibilidad;
    public:
        Libro() {};
    };
}
#endif //_LIBRO_H