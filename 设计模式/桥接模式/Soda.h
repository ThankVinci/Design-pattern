#pragma once
#include "IDrink.h"
class Soda:public IDrink
{
public:
	Soda(ITaste * pTaste, IBottle * pBottle, enum Drink drink=SODA);
	virtual void implement();
};

