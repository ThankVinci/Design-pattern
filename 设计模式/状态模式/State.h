#pragma once
#include "stdafx.h"

class Human;

class State
{
public:
	virtual void standOn(Human* human,string standname) = 0;
	virtual void standOff(Human* human) = 0;
	~State();
};

class Stand :public State{
private:
	string m_name;
public:
	Stand(string name);
	virtual void standOn(Human* human, string standname);
	virtual void standOff(Human* human);
	~Stand();
};

class Normal :public State {
public:
	virtual void standOn(Human* human, string standname);
	virtual void standOff(Human* human);
	~Normal();
};
