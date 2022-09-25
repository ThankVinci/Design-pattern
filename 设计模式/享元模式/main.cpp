// 享元模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "IBlock.h"

int main()
{
	IBlock** pblocks = new IBlock*[10];
	for (int i = 0; i < 10; i++) {
		pblocks[i] = new IBlock(Grass);
		pblocks[i]->draw(i, 10 - i);
	}
	for (int i = 0; i < 10; i++) {
		pblocks[i] = new IBlock(Dirt);
		pblocks[i]->draw(i, 10 - i);
	}
	for (int i = 0; i < 10; i++) {
		pblocks[i] = new IBlock(Stone);
		pblocks[i]->draw(i, 10 - i);
	}
}
