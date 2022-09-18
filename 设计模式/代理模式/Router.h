#pragma once
#include "Internet.h"
#include "stdafx.h"
using std::vector;
using std::string;
class Router:public Internet{
private:
	Modem* modem; //è
	vector<string> filter;//������
public:
	Router();
	virtual void call(string account,string password);
	void addFilter(string url);
	virtual void access(string url);
};

