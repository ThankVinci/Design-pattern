#include "TBJSBuild.h"

void TBJSBuild::buildCPU()
{
	m_product.setCPU("G1820");
}

void TBJSBuild::buildMEM1()
{
	m_product.setMEM1("��ʿ�� 2GB ���� 1333MHz");
}

void TBJSBuild::buildMEM2()
{
	m_product.setMEM2("��ʿ�� 2GB ���� 1333MHz");
}

void TBJSBuild::buildDISK1()
{
	m_product.setDISK1("��ʿ�� 120GB");
}

void TBJSBuild::buildMOTHERBOARD()
{
	m_product.setMOTHERBOARD("��˶H61");
}

void TBJSBuild::buildGPU()
{
	m_product.setGPU("");
}
