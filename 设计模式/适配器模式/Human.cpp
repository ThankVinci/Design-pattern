#include "Human.h"


Human::Human(string name):m_s_name(name)
{
}

const string & Human::GetName()const
{
	return m_s_name;
}

void Human::change()
{
	cout << GetName();
	ISoup::change();
}

void Human::implement()
{
}
