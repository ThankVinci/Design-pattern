#pragma once
#include "Product.h"
class Sugar :public Product {
public:
	Sugar(string brand, enum product type) :Product(brand, type) {}
};


