#pragma once
#include "IAbility.h"

//ĞÄÁé±¦Ê¯
class MindStone :public AbilityDecorate
{
public:
	MindStone(IAbility* ability);
	virtual void use();
};