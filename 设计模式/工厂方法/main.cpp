// 工厂方法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "stdafx.h"
#include "BlackTeaFactory.h"

int main()
{
	IFactory* factory1 = new BlackTeaFactory();
	IProduct* product1 = factory1->produce("昏睡");
	IProduct* product2 = factory1->produce("康师傅冰");
	IProduct* product3 = factory1->produce("统一冰");
	product1->print();
	product2->print();
	product3->print();
}
