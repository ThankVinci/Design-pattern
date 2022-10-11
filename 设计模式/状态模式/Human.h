#pragma once
#include "State.h"
class Human
{
private:
	string m_name;
	shared_ptr<State> m_state;
public:
	Human(string name);
	void setState(shared_ptr<State> state);
	shared_ptr<State> getState();
	void standOn(string standname);
	void standOff();
	string getName();
	~Human();
};

