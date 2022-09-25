// 模板方法模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Exaid.h"
#include "Brave.h"
#include "Snipe.h"

int main()
{
	IKamenRider* exaid = new Exaid("包永梦");
	IKamenRider* brave = new Brave("马天宇");
	IKamenRider* snipe = new Snipe("隼人队员");
	exaid->henshin();
	brave->henshin();
	snipe->henshin();
}