#pragma once
#include "IPCBuild.h"

#define ͼ���� TLDBuild

//ͼ����������
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

