#pragma once
#include "IProduct.h"

//抽象工厂类型
class IFactory
{
public:
	virtual IProduct* produce(string brand) = 0;
};

