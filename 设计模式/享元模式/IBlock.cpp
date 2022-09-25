#include "IBlock.h"

IBlock::IBlock(Block bid)
{
	m_res_id = bid;
	m_loader = SkinLoader::GetInstance();
}
void IBlock::draw(int x,int y)
{
	string name = m_loader->load(m_res_id);
	cout << "在(" << x << "," << y << ")绘制资源：" << name << endl;
}
