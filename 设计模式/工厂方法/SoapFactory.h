#pragma once
#include "IFactory.h"
class SoapFactory : public IFactory
{
public:
	virtual IProduct* produce(string brand);
};

