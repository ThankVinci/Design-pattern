#pragma once
#include "ISoup.h"
#include "stdafx.h"

//��������������
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

