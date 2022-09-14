#pragma once
#include "IFactory.h"
class BlackTeaFactory: public IFactory
{
public:
	virtual IProduct* produce(string brand);
};

