#include "MindStone.h"
#include "stdafx.h"

MindStone::MindStone(IAbility * ability):AbilityDecorate(ability)
{
}

void MindStone::use()
{
	pAbility->use();
	cout << "���鱦ʯ" << endl;
}
