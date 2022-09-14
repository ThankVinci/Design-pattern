#pragma once
#include "IProduct.h"
class Soap :public IProduct {
public:
	Soap(string brand, enum product type) :IProduct(brand, type) {}
	virtual void implement() {
		//仅仅是表现一下纯虚函数的重载和抽象接口的实现
	}
};

