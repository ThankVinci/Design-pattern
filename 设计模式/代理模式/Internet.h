#pragma once
#include "stdafx.h"
//抽象的因特网类
class Internet
{
protected:
	bool isLogin;
public:
	Internet();
	virtual void call(string account,string password); //拨号
	virtual void access(string url) = 0; //上网访问
	bool loginStatus();
};

class Modem :public Internet {
public:
	virtual void access(string url);
};

