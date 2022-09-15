#pragma once
#include "ISoup.h"
#include "stdafx.h"

//汤的适能者人类
class Human:public ISoup
{
private:
	string m_s_name;
public:
	Human(string name);
	const string& GetName()const;
	virtual void change();
	virtual void implement();
};

