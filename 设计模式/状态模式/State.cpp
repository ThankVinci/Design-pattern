#include "State.h"
#include "Human.h"

Stand::Stand(string name)
{
	m_name = name;
}

void Stand::standOn(Human * human, string standname)
{
	cout << "一个人只能拥有一个替身\n" ;
}

void Stand::standOff(Human * human)
{
	human->setState(shared_ptr<State>(new Normal));
	cout << human->getName() << "失去了替身 "<<m_name<<" \n";
}

Stand::~Stand()
{
	cout << "替身" << m_name << "被回收";
}

void Normal::standOn(Human * human, string standname)
{
	human->setState(shared_ptr<State>(new Stand(standname)));
	cout << human->getName() << "获得了替身 " << standname << "\n";
}

void Normal::standOff(Human * human)
{
	cout << human->getName() << "已经没有替身了，不能重复取走替身\n";
}

Normal::~Normal()
{
	//cout << "普通状态";
}

State::~State()
{
	//cout << "被回收\n";
}
