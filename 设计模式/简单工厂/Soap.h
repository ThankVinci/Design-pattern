#pragma once
#include "Product.h"
class Soap :public Product {
public:
	Soap(string brand, enum product type) :Product(brand, type) {}
};

