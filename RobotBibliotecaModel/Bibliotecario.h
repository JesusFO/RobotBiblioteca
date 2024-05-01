/**
 * Project: Robot Biblioteca
 */


#ifndef _BIBLIOTECARIO_H
#define _BIBLIOTECARIO_H

using namespace System;

namespace SalesSystemModel {
    public ref class Bibliotecario {
    public:
        property int idBibliotecario;
        property String^ Nombre;
        property String^ Disponibilidad;

        Bibliotecario() {};
    };
}
#endif //_BIBLIOTECARIO_H