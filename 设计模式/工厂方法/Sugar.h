#pragma once
#include "IProduct.h"
class Sugar :public IProduct {
public:
	Sugar(string brand, enum product type):IProduct(brand, type) {}
	virtual void implement() {
		//�����Ǳ���һ�´��麯�������غͳ���ӿڵ�ʵ��
	}
};


