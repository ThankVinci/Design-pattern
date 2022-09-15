// 适配器模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "Human.h"
#include "LightAdapter.h"
#include "LightAdapter2.h"

int main()
{
	
	Human daigo("大古");
	daigo.change();
	LightAdapter adapter;
	adapter.setHuman(&daigo);
	cout << "想让巨人复苏的方法只有一个，那就是让";
	adapter.change();
	Human masaki("正木敬吾");
	adapter.setHuman(&masaki);
	adapter.change();
	LightAdapter2* p_adapter2 = LightAdapter2::GetInstance("大古");
	p_adapter2->change();
	p_adapter2 = LightAdapter2::GetInstance("正木敬吾");
	p_adapter2->change();
	return 0;
}
