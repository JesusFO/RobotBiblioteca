/**
 * Project: Robot Biblioteca
 */


#ifndef _SOLICITUDMANTENIMIENTO_H
#define _SOLICITUDMANTENIMIENTO_H

using namespace System; 

namespace SalesSystemModel {
    public ref class SolicitudMantenimiento {
    private:
        property int idSolicitudMantenimiento;
        property int idObjeto;
        property String^ problema;
        property String^ fecha;
    public:
        SolicitudMantenimiento() {};
        SolicitudMantenimiento(int idSolicitudMantenimiento, int idObjeto, String^ problema, String^ fecha) {};
    }
};
#endif //_SOLICITUDMANTENIMIENTO_H