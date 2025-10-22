/***********************************************************************
 * Module:  IOperacionFraccion.h
 * Author:  HP
 * Modified: martes, 7 de octubre de 2025 22:59:11
 * Purpose: Declaration of the class IOperacionFraccion
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_IOperacionFraccion_h)
#define __ObjectOrientedModel_1_IOperacionFraccion_h

#include <Fraccion.h>

class IOperacionFraccion
{
public:
   virtual Fraccion multiplicar(Fraccion f1, Fraccion f2)=0;

protected:
private:

};

#endif