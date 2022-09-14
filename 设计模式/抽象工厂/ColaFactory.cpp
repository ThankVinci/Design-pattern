#include "ColaFactory.h"
#include "CherryCola.h"
#include "DietCola.h"

IDrink * ColaFactory::produceLow()
{
	return new Cola(3.5f,LOW);
}

IDrink * ColaFactory::produceMedium()
{
	return new CherryCola(4.0f,MEDIUM);
}

IDrink * ColaFactory::produceHigh()
{
	return new DietCola(4.0f,HIGH);
}
