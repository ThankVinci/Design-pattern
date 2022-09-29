#pragma once
#include "stdafx.h"
class ReadingSteiner
{
protected:
	string m_name;
public:
	ReadingSteiner(string name) :m_name(name) {}
	virtual void response(double value) {}
	virtual void implement() = 0;
	~ReadingSteiner() {
		cout << m_name << "�뿪���������\n";
	}
};

class Kyoma :public ReadingSteiner 
{
public:
	Kyoma(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "��֪�������߷����䶯����ǰ�����ߵı䶯��Ϊ��" << setprecision(2) << value * 100 << "%��";
		if (value < 0) {
			cout << m_name << "������˼��\n";
		}
		else if (value < 0.01) {
			cout << m_name << "������\n";
		}
		else if (value == 0.01048596) {
			cout << m_name << "���ڵ���������ʯ֮�ŵ�������\n";
		}
		else if (value < 0.02 && value != 0.01048596) {
			cout << m_name << "���ֳ���\n";
		}
		else {
			cout << m_name << "������\n";
		}
	}
	virtual void implement() {}
};

class Tina :public ReadingSteiner
{
public:
	Tina(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "��֪�������߷����䶯���о�һ�к���Ϥ\n";
	}
	virtual void implement() {}
};


class Duduru :public ReadingSteiner
{
public:
	Duduru(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "��֪�������߷����䶯�����˸�ج��\n";
	}
	virtual void implement() {}
};

class PocketWatch :public ReadingSteiner
{
public:
	PocketWatch(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		if (value < 0.01) {
			cout << m_name << "��֪�������߷����䶯������\n";
		}
		else {
			cout << m_name << "��֪�������߷����䶯�����Ǹ��Լ����˷���\n";
		}
		
	}
	virtual void implement() {}
};