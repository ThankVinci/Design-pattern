#pragma once

#include "Servant.h"
class Archer :public Servant
{
public:
	Archer(string name="英灵卫宫") :Servant(name) {}
	virtual void reply() {
		cout << m_name << "开着UBW结界就过来了\n";
	}
};
