#include "SoulStone.h"
#include "stdafx.h"

SoulStone::SoulStone(IAbility* ability):AbilityDecorate(ability)
{
}

void SoulStone::use()
{
	pAbility->use();
	cout << "Áé»ê±¦Ê¯" << endl;
}
