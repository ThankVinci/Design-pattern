#pragma once
#include "stdafx.h"

//¿ÚÎ¶Àà
class ITaste
{
private:
	string m_taste;
public:
	ITaste(enum Taste taste);
	string GetTaste();
	virtual void implement() = 0;
};

