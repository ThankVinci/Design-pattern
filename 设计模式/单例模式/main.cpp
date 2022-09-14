// 单例模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "God.h"

int main()
{
	God* pgod = God::GetInstance();
	return 0;
}