/***********************************************************************
 * Module:  Fraccion.h
 * Author:  HP
 * Modified: martes, 7 de octubre de 2025 23:26:53
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Fraccion_h)
#define __ObjectOrientedModel_1_Fraccion_h

#include <IOperacionFraccion.h>

class Fraccion : public IOperacionFraccion
{
public:
   Fraccion(float n, float d);
   void setNumerador(float n);
   void setDenominador(float d);
   float getNumerador(void);
   float getDenominador(void);
   Fraccion multiplicar(Fraccion f1, Fraccion f2);

protected:
private:
   float numerador;
   float denominador;


};

#endif