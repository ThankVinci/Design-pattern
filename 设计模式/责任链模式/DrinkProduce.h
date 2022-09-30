#pragma once
#include "IDrinkHandler.h"
class Produce:public IDrinkHandler
{
public:
	virtual void handle() {
		cout << "生产饮料->";
		if (GetNext()) {
			GetNext()->handle();
		}
	}
	virtual void implement() {}
};

class Bottling :public IDrinkHandler
{
public:
	virtual void handle() {
		cout << "装瓶->";
		if (GetNext()) {
			GetNext()->handle();
		}
	}
	virtual void implement() {}
};

class Box :public IDrinkHandler
{
public:
	virtual void handle() {
		cout << "装箱->";
		if (GetNext()) {
			GetNext()->handle();
		}
	}
	virtual void implement() {}
};