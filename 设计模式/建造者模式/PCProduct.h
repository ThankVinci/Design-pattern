#pragma once
#include "stdafx.h"

//计算机产品
class PCProduct
{
private:
	string ms_cpu;
	string ms_mem1;
	string ms_mem2;
	string ms_disk1;
	string ms_motherboard;
	string ms_gpu;
public:
	void setCPU(string cpu);
	void setMEM1(string mem1);
	void setMEM2(string mem2);
	void setDISK1(string disk1);
	void setMOTHERBOARD(string motherboard);
	void setGPU(string gpu);

	void print();
};

