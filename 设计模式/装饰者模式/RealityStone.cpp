#include "RealityStone.h"
#include "stdafx.h"

RealityStone::RealityStone(IAbility * ability):AbilityDecorate(ability)
{
}

void RealityStone::use()
{
	pAbility->use();
	cout << "ÏÖÊµ±¦Ê¯" << endl;
}
