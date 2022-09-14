#include "MisakaFactory.h"


MisakaFactory* MisakaFactory::g_instance = new MisakaFactory();
MisakaFactory::MisakaFactory()
{
}

MisakaFactory * MisakaFactory::GetInstance()
{
	return g_instance;
}

Misaka * MisakaFactory::generate()
{
	return (Misaka*)Misaka::GetInstance()->clone();
}
