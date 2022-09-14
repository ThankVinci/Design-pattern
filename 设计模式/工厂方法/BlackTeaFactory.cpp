#include "BlackTeaFactory.h"
#include "BlackTea.h"

IProduct * BlackTeaFactory::produce(string brand)
{
	return new BlackTea(brand, BLACKTEA);
}
