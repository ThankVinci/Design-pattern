#pragma once
#include "Servant.h"
//圣遗物类型
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
		cout << "使用" << m_name;
		cout << "召唤英灵：";
		if (m_servant) {
			m_servant->reply();
		}
		else {
			cout << "失败";
		}
		cout << "\n";
	}
};

