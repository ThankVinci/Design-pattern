#pragma once
#include "IDrink.h"

enum LEVEL{LOW,MEDIUM,HIGH};
static string levels[10] = {"����","ӣ�ҿ���","���ǿ���"};
class Cola :public IDrink
{
private:
	string m_s_level;
public:
	Cola(float price, enum LEVEL level);
	virtual void print();
	virtual void implement();
};

