#pragma once
#include "IPCBuild.h"

#define 图拉丁 TLDBuild

//图拉丁建造者
class TLDBuild:public IPCBuild
{
public:
	virtual void buildCPU();
	virtual void buildMEM1();
	virtual void buildMEM2();
	virtual void buildDISK1();
	virtual void buildMOTHERBOARD();
	virtual void buildGPU();
};

