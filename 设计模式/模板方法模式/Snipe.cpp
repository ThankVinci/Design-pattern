#include "Snipe.h"

Snipe::Snipe(string rider):IKamenRider(rider)
{
}

void Snipe::sayLines()
{
	cout << m_rider << ":����ʮս��" << endl;
}

void Snipe::insertGashat()
{
	cout << m_rider << "����������ģ�⿨��" << endl;
}
