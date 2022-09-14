#include "Misaka.h"

Misaka* Misaka::g_instance = new Misaka(); //ֱ�Ӷ���ʽ
int Misaka::g_clone_serial = 1;
Misaka::Misaka()
{
	m_s_name = "Misaka  Mikoto";
	m_s_ability = "Electro Master";
	m_level = 5;
}

Misaka * Misaka::GetInstance()
{
	return g_instance;
}

Cloneable* Misaka::clone()
{
	Misaka* iimoto = new Misaka;

	iimoto->m_s_name = string( "Misaka" + to_string(g_clone_serial++));
	iimoto->m_s_ability = g_instance->m_s_ability;
	iimoto->m_level = g_instance->m_level; //Ϊ��������������͵ȼ�ֱ�Ӻ�ԭ���һ��
	return iimoto;
}

void Misaka::print()
{
	cout << "Name:" << m_s_name << ";Ability:" << m_s_ability << " Lv." << m_level << endl;
}
