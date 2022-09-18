// 装饰者模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"
#include "Thanos.h"
#include "InfinityGauntlet.h"
#include "PowerStone.h"
#include "SpaceStone.h"
#include "TimeStone.h"
#include "RealityStone.h"
#include "MindStone.h"
#include "SoulStone.h"


int main()
{
	IAbility* user = new InfinityGauntlet(new SpaceStone(new TimeStone(new Thanos())));
	user->use();
	user->afterUse();
}