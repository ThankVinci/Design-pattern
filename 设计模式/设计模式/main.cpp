// 设计模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

enum product {
	SOUP, SUGAR, BLACKTEA
};

using std::string;
using std::cout;
using std::endl;
class Product {
private:
	string m_s_brand; //商品品牌
public:
	Product(string brand) :m_s_brand(brand) {}
	virtual void print() { //打印商品名称
		cout << m_s_brand ;
	}
};

class Soup :public Product{
public:
	Soup(string brand) :Product(brand) {}
	virtual void print() { //打印商品名称
		Product::print();
		cout << "香皂" << endl;
	}
};

class Sugar :public Product {
public:
	Sugar(string brand) :Product(brand) {}
	virtual void print() { //打印商品名称
		Product::print();
		cout << "蔗糖" << endl;
	}
};

class BlackTea :public Product {
public:
	BlackTea(string brand) :Product(brand) {}
	virtual void print() { //打印商品名称
		Product::print();
		cout << "红茶" << endl;
	}
};

class Factory {
public:
	virtual Product* produce(enum product pname, string brand ) {
		switch (pname) {
		case SOUP: return new Soup(brand); break;
		case SUGAR: return new Sugar(brand); break;
		case BLACKTEA: return new BlackTea(brand); break;
		}
	}
};

int main()
{
	Factory factory;
	Product* product1 = factory.produce(SOUP,"二仙桥牌");
	Product* product2 = factory.produce(SUGAR,"二仙桥牌");
	Product* product3 = factory.produce(BLACKTEA,"二仙桥牌");
	product1->print();
	product2->print();
	product3->print();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
