#include "IKamenRider.h"

IKamenRider::IKamenRider(string rider):m_rider(rider){}

void IKamenRider::driveOn()
{
	cout << m_rider << "装备了 [玩家驱动器]" << endl;
}

void IKamenRider::henshin()
{
	driveOn();
	sayLines();
	insertGashat();
	cout << m_rider << "变身完成" << endl;
}
