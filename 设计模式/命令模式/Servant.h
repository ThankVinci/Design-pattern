#pragma once
#include "stdafx.h"
//����
class Servant
{
protected:
	string m_name;
public:
	Servant(string name):m_name(name){}
	virtual void reply() = 0;
};

