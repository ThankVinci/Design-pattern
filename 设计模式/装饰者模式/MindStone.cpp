#include "MindStone.h"
#include "stdafx.h"

MindStone::MindStone(IAbility * ability):AbilityDecorate(ability)
{
}

void MindStone::use()
{
	pAbility->use();
	cout << "ĞÄÁé±¦Ê¯" << endl;
}
