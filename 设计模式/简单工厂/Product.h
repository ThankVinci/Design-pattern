#pragma once
#include "stdafx.h"

enum product { //产品枚举
	SOAP, SUGAR, BLACKTEA
};
static string product[10] = { "香皂","蔗糖","红茶" };

//一切产品的基类
class Product {
private:
	string m_s_brand; //产品品牌
	enum product m_type; //产品类型
public:
	Product(string brand, enum product type);
	virtual void print();
};


