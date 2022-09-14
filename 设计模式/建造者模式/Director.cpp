#include "Director.h"

Director::Director(IPCBuild * builder):mp_builder(builder){}

PCProduct * Director::construct()
{
	mp_builder->buildCPU();
	mp_builder->buildMEM1();
	mp_builder->buildMEM2();
	mp_builder->buildDISK1();
	mp_builder->buildMOTHERBOARD();
	mp_builder->buildGPU();
	return mp_builder->GetProduct();
}
