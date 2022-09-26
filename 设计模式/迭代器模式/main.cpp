// 迭代器模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Pocket.h"

int main()
{
	Pocket<int> pocket1(12);
	Pocket<int>::Iterator<int>* iter = pocket1.GetIterator();
	pocket1.add(new int(34));
	pocket1.add(new int(34));
	pocket1.add(new int(34));
	pocket1.add(new int(34));
	pocket1.add(new int(34));
	while (iter->hasNext()) {
		std::cout << *iter->next() << std::endl;
	}
}
