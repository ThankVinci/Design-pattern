// 策略模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "Human.h"

int main()
{
	IDriver* gamer = new GamerDriver;
	IDriver* buggle = new BuggleDriver;
	IGashat* mightyActionX = new Gashat("全能动作X");
	IGashat* maximumMightyX = new DualGashat("满级全能X");
	IGashat* dangerousZombie = new Gashat("危险僵尸");
	IGashat* knockoutFight = new DualGashat("击倒斗士",Gashat::Direct);
	IGashat* chronicle = new Gashat("编年史");
	Human exaid,gemn,paradox,cronus;
	exaid.henshin();

	exaid.SetDriver(gamer);
	exaid.SetGashat(mightyActionX);
	exaid.henshin();
	exaid.SetGashat(maximumMightyX);
	exaid.henshin();

	gemn.SetDriver(buggle);
	gemn.SetGashat(dangerousZombie);
	gemn.henshin();
	gemn.SetDriver(gamer);
	gemn.henshin();

	paradox.SetGashat(knockoutFight);
	paradox.henshin();
	paradox.SetDriver(gamer);
	paradox.henshin();

	cronus.SetDriver(buggle);
	cronus.SetGashat(chronicle);
	cronus.henshin();
}
