#pragma once
#include "IAbility.h"

//��ʵ��ʯ
class RealityStone :public AbilityDecorate
{
public:
	RealityStone(IAbility* ability);
	virtual void use();
};