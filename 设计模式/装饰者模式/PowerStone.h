#pragma once
#include "IAbility.h"
//������ʯ
class PowerStone:public AbilityDecorate
{
public:
	PowerStone(IAbility* ability);
	virtual void use();
};

