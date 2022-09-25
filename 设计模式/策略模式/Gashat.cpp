#include "Gashat.h"

IGashat::IGashat(string name, Type type):m_name(name),m_type(type)
{
}

string IGashat::GetGashat()
{
	return m_name;
}

int IGashat::GetType()
{
	return m_type;
}

Gashat::Gashat(string name, Type type):IGashat(name,type)
{
}

DualGashat::DualGashat(string name, Type type) : IGashat(name, type)
{
}
