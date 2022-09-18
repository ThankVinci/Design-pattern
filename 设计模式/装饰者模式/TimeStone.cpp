#include "TimeStone.h"
#include "stdafx.h"

TimeStone::TimeStone(IAbility * ability):AbilityDecorate(ability)
{
}

void TimeStone::use()
{
	pAbility->use();
	cout << "ʱ�䱦ʯ" << endl;
}
