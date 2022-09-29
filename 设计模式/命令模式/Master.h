#pragma once
#include "Relic.h"
class Master
{
private:
	string m_name;
	Relic* m_relic;
public:
	Master(string name ) :m_name(name){}
	void setRelic(Relic* relic) {
		m_relic = relic;
	}
	void summon() {
		cout << m_name;
		if(m_relic) m_relic->call();
	}
};

