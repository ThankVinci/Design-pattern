#pragma once
#include "stdafx.h"

class IGashat
{
public:
	enum Type {Driver=1,Direct};
private:
	string m_name;
	Type m_type;
public:
	IGashat(string name, Type type);
	string GetGashat();
	int GetType();
};

class Gashat :public IGashat {
public:
	Gashat(string name, Type type = Driver);
};

class DualGashat :public IGashat {
public:
	DualGashat(string name, Type type = Driver);
};