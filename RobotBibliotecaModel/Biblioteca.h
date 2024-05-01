/**
 * Project: Robot Biblioteca
 */


#ifndef _BIBLIOTECA_H
#define _BIBLIOTECA_H

using namespace System;

namespace SalesSystemModel {
    public ref class Biblioteca {
    private:
        property String^ direccion;
        property String^ nombre;
        property String^ horarioAtencion;
        property String^ registrosPrestamo;
    public:
        property int idBiblioteca;
        Biblioteca() {}
    };
}
#endif //_BIBLIOTECA_H