#pragma once
#include "stdafx.h"
class IDriver
{
private:
	string m_name;
	int m_slotcount;
public:
	IDriver(string name,int count);
	string GetDriver();
};

class GamerDriver :public IDriver {
public:
	GamerDriver(string name = "Íæ¼ÒÇý¶¯Æ÷", int count = 2);
};

class BuggleDriver :public IDriver {
public:
	BuggleDriver(string name = "¹ÊÕÏÇý¶¯Æ÷", int count = 1);
};