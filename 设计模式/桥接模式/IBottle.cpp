#include "IBottle.h"

IBottle::IBottle(enum Size s):m_size(sizes[s])
{
}

string IBottle::GetSize()
{
	return m_size;
}
