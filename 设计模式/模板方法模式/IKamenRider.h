#pragma once
#include "stdafx.h"
class IKamenRider
{
protected:
	string m_rider;
public:
	IKamenRider(string rider);
	virtual void driveOn(); //װ��������
	virtual void sayLines() = 0; //˵̨��
	virtual void insertGashat() = 0; //���뿨��
	void henshin(); //����
};

