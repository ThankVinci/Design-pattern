#pragma once
#include "IAbility.h"

//œ÷ µ±¶ Ø
class RealityStone :public AbilityDecorate
{
public:
	RealityStone(IAbility* ability);
	virtual void use();
};