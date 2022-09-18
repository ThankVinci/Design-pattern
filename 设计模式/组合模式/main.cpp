// 组合模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "Item.h"
#include "Menu.h"

int main()
{
	Menu *menu1 = new Menu("文件");
	menu1->Add(new Item("新建"));
	menu1->Add(new Item("打开"));
	menu1->Add(new Item("保存"));
	Menu *menu2 = new Menu("另存为");
	menu1->Add(menu2);
	menu2->Add(new Item("本地文件"));
	menu2->Add(new Item("局域网文件"));
	Menu *menu3 = new Menu("发送到");
	menu2->Add(menu3);
	menu3->Add(new Item("蓝牙"));
	menu3->Add(new Item("红外"));
	menu1->show("");
}

