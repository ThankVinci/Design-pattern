#pragma once
#include "stdafx.h"

//��ζ��
class ITaste
{
private:
	string m_taste;
public:
	ITaste(enum Taste taste);
	string GetTaste();
	virtual void implement() = 0;
};

