#pragma once

#include "Servant.h"
class Archer :public Servant
{
public:
	Archer(string name="Ӣ������") :Servant(name) {}
	virtual void reply() {
		cout << m_name << "����UBW���͹�����\n";
	}
};
