#pragma once
#include "Cloneable.h"
class Misaka:public Cloneable
{
private:
	Misaka();
	static Misaka* g_instance;
	static int g_clone_serial;
	string m_s_name;
	string m_s_ability;
	int m_level;
public:
	static Misaka* GetInstance();
	virtual Cloneable* clone();
	void print();
};

