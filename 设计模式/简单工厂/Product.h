#pragma once
#include "stdafx.h"

enum product { //��Ʒö��
	SOAP, SUGAR, BLACKTEA
};
static string product[10] = { "����","����","���" };

//һ�в�Ʒ�Ļ���
class Product {
private:
	string m_s_brand; //��ƷƷ��
	enum product m_type; //��Ʒ����
public:
	Product(string brand, enum product type);
	virtual void print();
};


