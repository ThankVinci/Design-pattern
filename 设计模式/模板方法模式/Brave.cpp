#include "Brave.h"

Brave::Brave(string rider):IKamenRider(rider)
{
}

void Brave::sayLines()
{
	cout << m_rider << ":����Lv.3" << endl;
}

void Brave::insertGashat()
{
	cout << m_rider << "������̽����������Ŀ���" << endl;
}
