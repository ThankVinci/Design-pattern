#pragma once
//�����
#include "IAbility.h"
class Thanos:public IAbility
{
private:
	IAbility* pAbility;
public:
	Thanos();
	virtual void use();
};

