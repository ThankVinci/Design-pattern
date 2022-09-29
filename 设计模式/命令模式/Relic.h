#pragma once
#include "Servant.h"
//ʥ��������
class Relic
{
protected:
	string m_name;
	Servant* m_servant;
public:
	Relic(string name) :m_name(name) {
		init();
	}
	virtual void init() {
		
	};
	virtual void implement() = 0;
	void call() {
		cout << "ʹ��" << m_name;
		cout << "�ٻ�Ӣ�飺";
		if (m_servant) {
			m_servant->reply();
		}
		else {
			cout << "ʧ��";
		}
		cout << "\n";
	}
};

