#include "Notificacion.h"

using namespace RobotBooks_G6_Model;

Notificacion::Notificacion() {

}

Notificacion::Notificacion(int idNotificacion, String^ asunto, String^ mensaje, String^ FechaNotificacion, String^ HoraNotificacion, Usuario^ objUsuario) {
	this->idNotificacion = idNotificacion;
	this->asunto = asunto;
	this->mensaje = mensaje;
	this->FechaNotificacion = FechaNotificacion;
	this->HoraNotificacion = HoraNotificacion;
	this->objUsuario = objUsuario;
}