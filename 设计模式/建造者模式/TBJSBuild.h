#pragma once
#include "IPCBuild.h"
#define �Ա����� TBJSBuild

//�Ա����̽�����
class TBJSBuild :public IPCBuild
{
	virtual void buildCPU();
	virtual void buildMEM1();
	virtual void buildMEM2();
	virtual void buildDISK1();
	virtual void buildMOTHERBOARD();
	virtual void buildGPU();
};

