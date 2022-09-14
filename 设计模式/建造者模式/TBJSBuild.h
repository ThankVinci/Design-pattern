#pragma once
#include "IPCBuild.h"
#define 淘宝奸商 TBJSBuild

//淘宝奸商建造者
class TBJSBuild :public IPCBuild
{
	virtual void buildCPU();
	virtual void buildMEM1();
	virtual void buildMEM2();
	virtual void buildDISK1();
	virtual void buildMOTHERBOARD();
	virtual void buildGPU();
};

