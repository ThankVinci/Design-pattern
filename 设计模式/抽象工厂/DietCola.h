#pragma once
#include "Cola.h"

//���ǿ�����
class DietCola:public Cola
{
public:
	DietCola(float price, enum LEVEL level);
	virtual void implement();
};

