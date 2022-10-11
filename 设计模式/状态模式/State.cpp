#include "State.h"
#include "Human.h"

Stand::Stand(string name)
{
	m_name = name;
}

void Stand::standOn(Human * human, string standname)
{
	cout << "һ����ֻ��ӵ��һ������\n" ;
}

void Stand::standOff(Human * human)
{
	human->setState(shared_ptr<State>(new Normal));
	cout << human->getName() << "ʧȥ������ "<<m_name<<" \n";
}

Stand::~Stand()
{
	cout << "����" << m_name << "������";
}

void Normal::standOn(Human * human, string standname)
{
	human->setState(shared_ptr<State>(new Stand(standname)));
	cout << human->getName() << "��������� " << standname << "\n";
}

void Normal::standOff(Human * human)
{
	cout << human->getName() << "�Ѿ�û�������ˣ������ظ�ȡ������\n";
}

Normal::~Normal()
{
	//cout << "��ͨ״̬";
}

State::~State()
{
	//cout << "������\n";
}
