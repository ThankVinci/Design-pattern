#include "IAbility.h"
#include "stdafx.h"

AbilityDecorate::AbilityDecorate(IAbility * ability) :pAbility(ability)
{
}

void IAbility::afterUse()
{
	cout << "[Ч����Ⱥ!]" << endl;
}
