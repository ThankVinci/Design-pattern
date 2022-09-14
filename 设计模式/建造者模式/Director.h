#pragma once
#include "IPCBuild.h"
#include "PCProduct.h"
//÷∏ª”’ﬂ
class Director
{
private:
	IPCBuild* mp_builder;
public:
	Director(IPCBuild* builder);
	PCProduct* construct();
};

