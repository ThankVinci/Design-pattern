#pragma once
#include "IBottle.h"
class LittleBottle :public IBottle
{
public:
	LittleBottle(enum Size s=LITTEL);
	virtual void implement();
};

