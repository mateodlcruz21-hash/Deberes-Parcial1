/***********************************************************************
 * Module:  Operacion.h
 * Author:  mdlc2
 * Modified: sábado, 18 de octubre de 2025 17:11:39
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__Programa_Matriz_Operacion_h)
#define __Programa_Matriz_Operacion_h

#include "Matriz.h"
#include "Operaciones.h"

class Operacion : public Operaciones {
public:
  Matriz sumaChar(Matriz matriz1, Matriz matriz2, int fila, int columna);
  Matriz sumaDouble(Matriz matriz1, Matriz matriz2, int fila, int columna);

protected:
private:
};

#endif
