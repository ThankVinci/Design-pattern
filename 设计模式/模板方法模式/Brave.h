#pragma once
#include "IKamenRider.h"
class Brave :public IKamenRider
{
public:
	Brave(string rider);
	virtual void sayLines();
	virtual void insertGashat();
};

