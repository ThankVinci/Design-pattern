#include "Exaid.h"

Exaid::Exaid(string rider):IKamenRider(rider)
{
}

void Exaid::sayLines()
{
	cout << m_rider << ":患者の運命は俺が変える！" << endl;
}

void Exaid::insertGashat()
{
	cout << m_rider << "插入了满级全能X卡带与超级无敌卡带！" << endl;
}
