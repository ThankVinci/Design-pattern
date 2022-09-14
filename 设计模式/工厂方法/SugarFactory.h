#pragma once
#include "IFactory.h"
class SugarFactory : public IFactory
{
public:
	virtual IProduct* produce(string brand);
};

