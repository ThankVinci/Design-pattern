#pragma once
#include "stdafx.h"
//�������������
class Internet
{
protected:
	bool isLogin;
public:
	Internet();
	virtual void call(string account,string password); //����
	virtual void access(string url) = 0; //��������
	bool loginStatus();
};

class Modem :public Internet {
public:
	virtual void access(string url);
};

