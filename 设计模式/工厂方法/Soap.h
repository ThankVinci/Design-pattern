#pragma once
#include "IProduct.h"
class Soap :public IProduct {
public:
	Soap(string brand, enum product type) :IProduct(brand, type) {}
	virtual void implement() {
		//�����Ǳ���һ�´��麯�������غͳ���ӿڵ�ʵ��
	}
};

