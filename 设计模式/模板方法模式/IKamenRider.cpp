#include "IKamenRider.h"

IKamenRider::IKamenRider(string rider):m_rider(rider){}

void IKamenRider::driveOn()
{
	cout << m_rider << "װ���� [���������]" << endl;
}

void IKamenRider::henshin()
{
	driveOn();
	sayLines();
	insertGashat();
	cout << m_rider << "�������" << endl;
}
