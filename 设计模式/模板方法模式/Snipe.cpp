#include "Snipe.h"

Snipe::Snipe(string rider):IKamenRider(rider)
{
}

void Snipe::sayLines()
{
	cout << m_rider << ":第五十战术" << endl;
}

void Snipe::insertGashat()
{
	cout << m_rider << "插入了砰砰模拟卡带" << endl;
}
