#include "Brave.h"

Brave::Brave(string rider):IKamenRider(rider)
{
}

void Brave::sayLines()
{
	cout << m_rider << ":手术Lv.3" << endl;
}

void Brave::insertGashat()
{
	cout << m_rider << "插入了探索卡带与节拍卡带" << endl;
}
