#include "IDrink.h"

IDrink::IDrink(ITaste* pTaste, IBottle* pBottle,enum Drink drink ):m_drink(drinks[drink]),m_pTaste(pTaste),m_pBottle(pBottle)
{
}

void IDrink::show()
{
	cout << m_pBottle->GetSize() << m_pTaste->GetTaste() << m_drink << endl;
}
