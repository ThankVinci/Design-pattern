#include "PCProduct.h"

void PCProduct::setCPU(string cpu)
{
	ms_cpu = cpu;
}

void PCProduct::setMEM1(string mem1)
{
	ms_mem1 = mem1;
}

void PCProduct::setMEM2(string mem2)
{
	ms_mem2 = mem2;
}

void PCProduct::setDISK1(string disk1)
{
	ms_disk1 = disk1;
}

void PCProduct::setMOTHERBOARD(string motherboard)
{
	ms_motherboard = motherboard;
}

void PCProduct::setGPU(string gpu)
{
	ms_gpu = gpu;
}

void PCProduct::print()
{
	cout << "´óÀÐ¿µ¿µÎÒµÄÅäÖÃ£º\nCPU:" << ms_cpu <<
		"\nMem:" << ms_mem1 << " " << ms_mem2 <<
		"\ndisk:" << ms_disk1 <<
		"\nmotherboard:" << ms_motherboard <<
		"\nGPU:" << ms_gpu << endl;

}
