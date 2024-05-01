/**
 * Project Robot Biblioteca
 */
#pragma once

#ifndef _REPOSITORIO_H
#define _REPOSITORIO_H

using namespace System;

namespace RobotBibliotecaModel {
    public ref class Repositorio {
    private:
        property int idRepositorio;
        property String^ Estante;
        property int Piso;
        property String^ Categoria;
        property String^ Autores;
        property String^ IDRepositorio;
        property String^ etiqueta;
    public:
        Repositorio() {}
        Repositorio(int idRepositorio, String^ Estante, int Piso, String^ Categoria, String^ Autores, String^ IDRepositorio, String^ etiqueta) {}
    };
}
#endif //_REPOSITORIO_H