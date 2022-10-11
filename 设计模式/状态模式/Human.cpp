#include "Human.h"

Human::Human(string name)
{
	m_name = name;
	m_state = shared_ptr<State>(new Normal);
}

void Human::setState(shared_ptr<State> state)
{
	m_state = state;
}

shared_ptr<State> Human::getState()
{
	return m_state;
}

void Human::standOn(string standname)
{
	m_state->standOn(this, standname);
}

void Human::standOff()
{
	m_state->standOff(this);
}

string Human::getName()
{
	return m_name;
}

Human::~Human()
{
	cout << m_name << "ËÀÍö,";
}

