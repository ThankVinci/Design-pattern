#pragma once
#include "Soap.h"
#include "Sugar.h"
#include "BlackTea.h"

class Factory {
public:
	virtual Product* produce(string brand, enum product type);
};
