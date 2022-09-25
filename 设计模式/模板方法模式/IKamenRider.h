#pragma once
#include "stdafx.h"
class IKamenRider
{
protected:
	string m_rider;
public:
	IKamenRider(string rider);
	virtual void driveOn(); //装上驱动器
	virtual void sayLines() = 0; //说台词
	virtual void insertGashat() = 0; //插入卡带
	void henshin(); //变身
};

