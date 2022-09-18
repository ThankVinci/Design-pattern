#pragma once
#include "stdafx.h"

class IBottle
{
public:
	string m_size;
public:
	IBottle(enum Size s);
	string GetSize();
	virtual void implement() = 0;
};

