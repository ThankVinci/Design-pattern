#pragma once
#include "stdafx.h"
class Cloneable
{
//抽象的克隆接口
public:
	virtual Cloneable* clone() = 0;
};

