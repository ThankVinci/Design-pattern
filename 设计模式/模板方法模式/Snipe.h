#pragma once
#include "IKamenRider.h"
class Snipe :public IKamenRider
{
public:
	Snipe(string rider);
	virtual void sayLines();
	virtual void insertGashat();
};

