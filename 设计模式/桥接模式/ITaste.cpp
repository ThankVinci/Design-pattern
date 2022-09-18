#include "ITaste.h"

ITaste::ITaste(enum Taste taste):m_taste(tastes[taste])
{
}

string ITaste::GetTaste()
{
	return m_taste;
}
