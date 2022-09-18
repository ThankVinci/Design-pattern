#pragma once
#include "IDrink.h"

class Juice:public IDrink
{
public:
	Juice( ITaste* pTaste, IBottle* pBottle,enum Drink drink=JUICE);
	virtual void implement();
};

