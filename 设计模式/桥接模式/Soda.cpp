#include "Soda.h"

Soda::Soda(ITaste * pTaste, IBottle * pBottle, enum Drink drink):IDrink(pTaste, pBottle, drink)
{
}

void Soda::implement()
{
}
