#include "Product.h"

Product::Product(string brand, enum product type) :m_s_brand(brand), m_type(type) {}

void Product::print() { //��ӡ��Ʒ
	cout << m_s_brand << product[m_type] << endl;
}