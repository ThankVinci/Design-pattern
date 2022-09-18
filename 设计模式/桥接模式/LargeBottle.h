#pragma once
#include "IBottle.h"
class LargeBottle:public IBottle
{
public:
	LargeBottle(enum Size s=LARGE);
	virtual void implement();
};

