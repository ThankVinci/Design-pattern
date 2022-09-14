#pragma once
#include "Misaka.h"
class MisakaFactory
{
protected:
	MisakaFactory();
private:
	static MisakaFactory* g_instance;
public:
	static MisakaFactory* GetInstance();
	virtual Misaka* generate();
};

