#pragma once
#include "stdafx.h"
//�������Ͻӿ�
class IDrink
{
private:
	float f_price;
public:
	IDrink(float price );
	float GetPrice();
	virtual void implement() = 0;
};

