#pragma once
#include "stdafx.h"
#include "productinfo.h"

//�����Ʒ����
class IProduct
{
private:
	string m_s_brand; //��ƷƷ��
	enum product m_type; //��Ʒ����
public:
	IProduct(string brand, enum product type);
	virtual void print();
	virtual void implement() = 0;
};

