#pragma once
#include "IAbility.h"

//ʱ�䱦ʯ
class TimeStone :public AbilityDecorate
{
public:
	TimeStone(IAbility* ability);
	virtual void use();
};