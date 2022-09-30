#pragma once
#include "stdafx.h"

class IDrinkHandler
{
protected:
	shared_ptr<IDrinkHandler> m_next;
public:
	void SetNext(shared_ptr<IDrinkHandler> next) {
		m_next = next;
	}
	shared_ptr<IDrinkHandler> GetNext() {
		return m_next;
	}
	virtual void handle() {}
	virtual void implement() = 0;
	~IDrinkHandler() {
		cout << "½áÊø\n";
	}
};

