#pragma once
#include "Soul.h"
class TimeLeapMachine
{
private:
	Soul m_soul;
public:
	TimeLeapMachine() {}
	void SetSoul(Soul soul) {
		m_soul = soul;
	}
	Soul GetSoul() {
		return m_soul;
	}
};

