#include "LightAdapter.h"

void LightAdapter::setHuman(Human * human)
{
	p_human = human;
}

void LightAdapter::change()
{
	if (p_human == NULL) return;
	cout << p_human->GetName();
	ILight::change();
}

void LightAdapter::implement()
{
}
