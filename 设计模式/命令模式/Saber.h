#pragma once
#include "Servant.h"
class Saber:public Servant
{
public:
	Saber(string name="阿尔托莉雅") :Servant(name) {}
	virtual void reply() {
		cout << m_name << "端着饭碗就过来了\n";
	}
};

