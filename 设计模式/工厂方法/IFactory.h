#pragma once
#include "IProduct.h"

//���󹤳�����
class IFactory
{
public:
	virtual IProduct* produce(string brand) = 0;
};

