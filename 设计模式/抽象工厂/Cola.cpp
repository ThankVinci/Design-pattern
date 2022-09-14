#include "Cola.h"

Cola::Cola(float price, enum LEVEL level) :IDrink(price), m_s_level(levels[level]){}

void Cola::print()
{
	cout <<m_s_level<<":£¤"<<IDrink::GetPrice()<< endl;
}

void Cola::implement() {
	//ÊµÏÖÀà
}