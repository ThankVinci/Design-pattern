#pragma once
#include "IAbility.h"
//Á¦Á¿±¦Ê¯
class PowerStone:public AbilityDecorate
{
public:
	PowerStone(IAbility* ability);
	virtual void use();
};

