// 建造者模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "Director.h"
#include "TBJSBuild.h"
#include "TLDBuild.h"

int main()
{
	图拉丁 builder1;
	淘宝奸商 builder2;
	Director director1(&builder1);
	PCProduct* pc1 = director1.construct();
	pc1->print();
	cout << endl;
	Director director2(&builder2);
	PCProduct* pc2 = director2.construct();
	pc2->print();
	return 0;
}
