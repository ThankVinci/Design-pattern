#pragma once
#include "IProduct.h"
class BlackTea :public IProduct {
public:
	BlackTea(string brand, enum product type) :IProduct(brand, type) {}
	virtual void implement() {
		//�����Ǳ���һ�´��麯�������غͳ���ӿڵ�ʵ��
	}
};
