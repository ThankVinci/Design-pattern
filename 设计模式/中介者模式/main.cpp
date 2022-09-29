// 中介者模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "User.h"

int main()
{
	User* u0 = new User;
	User* u1 = new User;
	User* u2 = new User;
	User* u3 = new User;
	User* u4 = new User;

	u0->send(4, "张无忌你就是歌姬吧");
	u4->logout(); //很明显shared_ptr能够让指针回收控件
	u0->send(4, "张无忌你就是歌姬吧");
}