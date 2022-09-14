#include "SugarFactory.h"
#include "Sugar.h"

IProduct * SugarFactory::produce(string brand)
{
	return new Sugar(brand, SUGAR);
}
