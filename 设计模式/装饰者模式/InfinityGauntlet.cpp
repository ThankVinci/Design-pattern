#include "InfinityGauntlet.h"
#include "stdafx.h"

InfinityGauntlet::InfinityGauntlet(IAbility * ability):AbilityDecorate(ability)
{
}

void InfinityGauntlet::use()
{
	pAbility->use();
	cout << "ÎŞÏŞÊÖÌ×" << endl;
}
