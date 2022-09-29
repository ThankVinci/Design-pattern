#pragma once
#include "Soul.h"
class Okabe
{
private:
	string m_name;
	string m_date;
public:
	Okabe(string name, string date) :m_name(name), m_date(date) {}

	void say() {
		cout << "我是" << m_name << "，现在是" << m_date << "\n";
	}

	string GetDate() {
		return m_date;
	}
	void SetDate(string date) {
		m_date = date;
	}

	Soul backup() {
		return Soul(m_date);
	}

	void restore(Soul soul) {
		m_date = soul.GetDate();
	}
};

