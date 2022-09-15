#include "LightAdapter2.h"

LightAdapter2* LightAdapter2::g_instance = nullptr;
LightAdapter2::LightAdapter2(string name):Human(name){}

LightAdapter2 * LightAdapter2::GetInstance(string name)
{
	if (g_instance == nullptr) {
		g_instance = new LightAdapter2(name);
	}
	return g_instance;
}

void LightAdapter2::change()
{
	cout << Human::GetName();
	ILight::change();
}

void LightAdapter2::implement()
{
}
