#include "SoapFactory.h"
#include "Soap.h"

IProduct * SoapFactory::produce(string brand)
{
	return new Soap(brand, SOAP);
}
