#pragma once
#include "stdafx.h"
#include "productinfo.h"

//抽象产品类型
class IProduct
{
private:
	string m_s_brand; //产品品牌
	enum product m_type; //产品类型
public:
	IProduct(string brand, enum product type);
	virtual void print();
	virtual void implement() = 0;
};

