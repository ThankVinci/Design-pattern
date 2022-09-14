// 简单工厂.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "Factory.h"

int main()
{
	Factory factory;
	Product* product1 = factory.produce( "二仙桥牌", SOAP);
	Product* product2 = factory.produce( "二仙桥牌", SUGAR);
	Product* product3 = factory.produce( "二仙桥牌", BLACKTEA);
	product1->print();
	product2->print();
	product3->print();
}
