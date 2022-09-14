// 抽象工厂.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "ColaFactory.h"

int main()
{
	ColaFactory colaFactory;
	Cola* cola1 = (Cola*)colaFactory.produceLow();
	Cola* cola2 = (Cola*)colaFactory.produceMedium();
	Cola* cola3 = (Cola*)colaFactory.produceHigh();

	cola1->print();
	cola2->print();
	cola3->print();
}
