#pragma once
#include "IAbility.h"

//�ռ䱦ʯ
class SpaceStone :public AbilityDecorate
{
public:
	SpaceStone(IAbility* ability);
	virtual void use();
};