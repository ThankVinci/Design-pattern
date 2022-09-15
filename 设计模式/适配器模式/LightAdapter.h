#pragma once
#include "ILight.h"
#include "Human.h"

//¶ÔÏóÊÊÅäÆ÷

class LightAdapter:public ILight 
{
private:
	const Human* p_human;
public:
	void setHuman(Human* human);
	virtual void change();
	virtual void implement();
};

