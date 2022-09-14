#include "TLDBuild.h"

void TLDBuild::buildCPU()
{
	m_product.setCPU("i5-9400HQ");
}

void TLDBuild::buildMEM1()
{
	m_product.setMEM1("骇客神条 16GB 3200MHz");
}

void TLDBuild::buildMEM2()
{
	m_product.setMEM2("骇客神条 16GB 3200MHz");
}

void TLDBuild::buildDISK1()
{
	m_product.setDISK1("三星sn980 1TB");
}

void TLDBuild::buildMOTHERBOARD()
{
	m_product.setMOTHERBOARD("华擎妖板H365");
}

void TLDBuild::buildGPU()
{
	m_product.setGPU("GT610 1TB 疯牛病");
}
