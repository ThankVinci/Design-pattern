#pragma once
#include "IPCBuild.h"
#include "PCProduct.h"
//ָ����
class Director
{
private:
	IPCBuild* mp_builder;
public:
	Director(IPCBuild* builder);
	PCProduct* construct();
};

