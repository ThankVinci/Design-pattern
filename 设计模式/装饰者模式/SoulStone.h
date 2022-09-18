#pragma once
#include "IAbility.h"
//¡ÈªÍ±¶ Ø
class SoulStone:public AbilityDecorate
{
public:
	SoulStone(IAbility* ability);
	virtual void use();
};

