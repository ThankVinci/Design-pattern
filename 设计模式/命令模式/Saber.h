#pragma once
#include "Servant.h"
class Saber:public Servant
{
public:
	Saber(string name="����������") :Servant(name) {}
	virtual void reply() {
		cout << m_name << "���ŷ���͹�����\n";
	}
};

