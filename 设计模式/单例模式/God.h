#pragma once
#include "stdafx.h"
class God
{
private:
	God();
	static God* g_instance;
public:
	static God* GetInstance();
};

