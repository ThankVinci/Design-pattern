#include "IDrink.h"

IDrink::IDrink(float price):f_price(price){}

float IDrink::GetPrice()
{
	return f_price;
}
