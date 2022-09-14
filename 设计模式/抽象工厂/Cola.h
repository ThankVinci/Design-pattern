#pragma once
#include "IDrink.h"

enum LEVEL{LOW,MEDIUM,HIGH};
static string levels[10] = {"可乐","樱桃可乐","无糖可乐"};
class Cola :public IDrink
{
private:
	string m_s_level;
public:
	Cola(float price, enum LEVEL level);
	virtual void print();
	virtual void implement();
};

