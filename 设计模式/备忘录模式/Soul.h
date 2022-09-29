#pragma once
#include "stdafx.h"
class Soul
{
private:
	string m_date;
public:
	Soul(){}
	Soul(string date) :m_date(date) {}
	string GetDate() {
		return m_date;
	}
	void SetDate(string date) {
		m_date = date;
	}
};

