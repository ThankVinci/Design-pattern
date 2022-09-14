#pragma once
#include "Product.h"
class BlackTea :public Product {
public:
	BlackTea(string brand, enum product type) :Product(brand, type) {}
};
