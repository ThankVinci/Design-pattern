#pragma once
#include "IFactory.h"
#include "Cola.h"

class ColaFactory: public IFactory
{
public:
	virtual IDrink* produceLow();
	virtual IDrink* produceMedium();
	virtual IDrink* produceHigh();
};

