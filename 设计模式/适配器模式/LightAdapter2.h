#pragma once
#include "ILight.h"
#include "Human.h"

//¿‡  ≈‰∆˜

class LightAdapter2:public Human,public ILight
{
private:
	LightAdapter2(string name);
	static LightAdapter2* g_instance;
public:
	static LightAdapter2* GetInstance(string name);
	//LightAdapter2(string name);
	virtual void change();
	virtual void implement();
};

