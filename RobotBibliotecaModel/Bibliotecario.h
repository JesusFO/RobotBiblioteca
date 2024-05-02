/**
 * Project: Robot Biblioteca
 */


#ifndef _BIBLIOTECARIO_H
#define _BIBLIOTECARIO_H

using namespace System;

<<<<<<< HEAD
namespace RobotBibliotecaModel {
=======
namespace RobotBibliotecaModel{
>>>>>>> 3c32e9d1c38d62cc8ea8e41445c3c40b88e705e8
    public ref class Bibliotecario {
    private: 
        property int IdBibliotecario;
        property String^ Nombre;
        property String^ Disponibilidad;
    public:
        Bibliotecario() {};
        Bibliotecario(int idBibliotecario, String^ nombre, String^ disponibilidad) {
            IdBibliotecario = idBibliotecario;
            Nombre = nombre;
            Disponibilidad = disponibilidad;
        };
    };
}
#endif //_BIBLIOTECARIO_H