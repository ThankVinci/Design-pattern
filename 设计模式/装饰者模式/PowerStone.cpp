#include "PowerStone.h"
#include "stdafx.h"

PowerStone::PowerStone(IAbility* ability):AbilityDecorate(ability)
{
}

void PowerStone::use()
{
	pAbility->use();
	cout <<"Á¦Á¿±¦Ê¯"<< endl;
}
