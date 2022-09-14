#pragma once
#include "stdafx.h"
//抽象饮料接口
class IDrink
{
private:
	float f_price;
public:
	IDrink(float price );
	float GetPrice();
	virtual void implement() = 0;
};

