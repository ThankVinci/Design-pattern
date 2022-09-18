#pragma once
#include "Router.h"
class PC
{
private:
	Internet* pInternet;
public:
	void SetInternet(Internet* internet) {
		pInternet = internet;
	}
	void call(string account,string pasasword){
		if (pInternet) pInternet->call(account,pasasword);
	}
	void access(string url) {
		if (pInternet) pInternet->access(url);
	}
};

