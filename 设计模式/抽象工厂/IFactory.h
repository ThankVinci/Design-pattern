#pragma once
#include "IDrink.h"
class IFactory
{
	virtual IDrink* produceLow() = 0;
	virtual IDrink* produceMedium() = 0;
	virtual IDrink* produceHigh() = 0;
};

