#pragma once
#include "IAbility.h"
class InfinityGauntlet:public AbilityDecorate
{
public:
	InfinityGauntlet(IAbility* ability);
	virtual void use();
};

