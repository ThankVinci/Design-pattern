#include "Exaid.h"

Exaid::Exaid(string rider):IKamenRider(rider)
{
}

void Exaid::sayLines()
{
	cout << m_rider << ":���ߤ��\���ϰ����䤨�룡" << endl;
}

void Exaid::insertGashat()
{
	cout << m_rider << "����������ȫ��X�����볬���޵п�����" << endl;
}
