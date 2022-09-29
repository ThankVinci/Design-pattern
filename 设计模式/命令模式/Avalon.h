#pragma once
#include "Relic.h"
#include "Saber.h"
class Avalon:public Relic
{
public:
	Avalon(string name="°¢ÍßÂ¡") :Relic(name) {
		init();
	}
	virtual void init() {
		m_servant = new Saber();
	}
	virtual void implement() {}
};

