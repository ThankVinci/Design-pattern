#pragma once
#include "Relic.h"
#include "Archer.h"
class Ruby :public Relic
{
public:
	Ruby(string name="�챦ʯ") :Relic(name) {
		init();
	}
	virtual void init() {
		m_servant = new Archer();
	}
	virtual void implement() {}
};
