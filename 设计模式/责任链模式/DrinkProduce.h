#pragma once
#include "IDrinkHandler.h"
class Produce:public IDrinkHandler
{
public:
	virtual void handle() {
		cout << "��������->";
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
		cout << "װƿ->";
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
		cout << "װ��->";
		if (GetNext()) {
			GetNext()->handle();
		}
	}
	virtual void implement() {}
};