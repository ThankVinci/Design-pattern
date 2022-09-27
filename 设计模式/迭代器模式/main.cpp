// 迭代器模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Pocket.h"
using std::string;
int main()
{

	Pocket<string> pocket1(12);
	Pocket<string>::Iterator<string>* iter = pocket1.GetIterator();
	pocket1.add(string("Kugga"));
	pocket1.add(string("Agito"));
	pocket1.add(string("Ryuki"));
	pocket1.add(string("Faiz"));
	pocket1.add(string("Blade"));
	pocket1.add(string("Hibiki"));
	pocket1.add(string("Kabuto"));
	pocket1.add(string("Den-O"));
	pocket1.add(string("Kiva"));
	while (iter->hasNext()) {
		std::cout << iter->next() << std::endl;
	}
	pocket1.add(string("Decade"));
	pocket1.add(string("W"));
	pocket1.add(string("OOO"));
	pocket1.add(string("Fourze"));
	pocket1.add(string("Wizard"));
	pocket1.add(string("Gaim"));
	pocket1.add(string("Drive"));
	pocket1.add(string("Ghost"));
	pocket1.add(string("Ex-aid"));
	pocket1.add(string("Build"));
	pocket1.add(string("ZIO"));
	pocket1.add(string("ZeroOne"));
	pocket1.add(string("Saber"));
	
	while (iter->hasNext()) {
		std::cout << iter->next() << std::endl;
	}
}
