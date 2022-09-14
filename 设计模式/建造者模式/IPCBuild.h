#pragma once
#include "PCProduct.h"

//����Ľ�����
class IPCBuild
{
protected:
	PCProduct m_product;
public:
	virtual void buildCPU() = 0;
	virtual void buildMEM1() = 0;
	virtual void buildMEM2() = 0;
	virtual void buildDISK1() = 0;
	virtual void buildMOTHERBOARD() = 0;
	virtual void buildGPU() = 0;
	virtual PCProduct* GetProduct();
};

