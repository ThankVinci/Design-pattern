#pragma once
#include "IAbility.h"

//���鱦ʯ
class MindStone :public AbilityDecorate
{
public:
	MindStone(IAbility* ability);
	virtual void use();
};