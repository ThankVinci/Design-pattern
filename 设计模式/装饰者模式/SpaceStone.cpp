#include "SpaceStone.h"
#include "stdafx.h"

SpaceStone::SpaceStone(IAbility * ability):AbilityDecorate(ability)
{
}

void SpaceStone::use()
{
	pAbility->use();
	cout << "�ռ䱦ʯ" << endl;
}
