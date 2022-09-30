// 责任链模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "DrinkProduce.h"

int main()
{
	shared_ptr<IDrinkHandler> handle1(new Produce);
	shared_ptr<IDrinkHandler> handle2(new Bottling);
	shared_ptr<IDrinkHandler> handle3(new Box);

	handle1->SetNext(handle2);
	handle2->SetNext(handle3);

	handle1->handle();
	cout << "结束\n";
}