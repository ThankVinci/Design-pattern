// 备忘录模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "TimeLeapMachine.h"
#include "Okabe.h"

int main()
{
	Okabe okabe("凤凰院凶真","2010-08-17");
	okabe.say();
	TimeLeapMachine timeleap;
	timeleap.SetSoul(okabe.backup());
	okabe.SetDate("2025-06-08");
	okabe.say();
	okabe.restore(timeleap.GetSoul());
	okabe.say();
	
}