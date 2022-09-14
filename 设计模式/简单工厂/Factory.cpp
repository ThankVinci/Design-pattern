#include "Factory.h"

Product* Factory::produce(string brand, enum product type) {
	switch (type) {
	case SOAP: return new Soap(brand, type); break;
	case SUGAR: return new Sugar(brand, type); break;
	case BLACKTEA: return new BlackTea(brand, type); break;
	}
}