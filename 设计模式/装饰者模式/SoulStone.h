#pragma once
#include "IAbility.h"
//��걦ʯ
class SoulStone:public AbilityDecorate
{
public:
	SoulStone(IAbility* ability);
	virtual void use();
};

