#include "TBJSBuild.h"

void TBJSBuild::buildCPU()
{
	m_product.setCPU("G1820");
}

void TBJSBuild::buildMEM1()
{
	m_product.setMEM1("金士顿 2GB 普条 1333MHz");
}

void TBJSBuild::buildMEM2()
{
	m_product.setMEM2("金士顿 2GB 普条 1333MHz");
}

void TBJSBuild::buildDISK1()
{
	m_product.setDISK1("金士顿 120GB");
}

void TBJSBuild::buildMOTHERBOARD()
{
	m_product.setMOTHERBOARD("华硕H61");
}

void TBJSBuild::buildGPU()
{
	m_product.setGPU("");
}
