#include "IProduct.h"

IProduct::IProduct(string brand, enum product type) :m_s_brand(brand), m_type(type) {}

void IProduct::print()
{
	cout << m_s_brand << product[m_type] << endl;
}
