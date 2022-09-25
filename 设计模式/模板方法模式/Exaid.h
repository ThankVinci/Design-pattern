#pragma once
#include "IKamenRider.h"
class Exaid:public IKamenRider
{
public:
	Exaid(string rider);
	virtual void sayLines();
	virtual void insertGashat();
};

