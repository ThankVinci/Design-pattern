#include "Visitor.h"
#include "Arrow.h"

void Boss::visit(StandArrow * pArrow)
{
	cout << "迪亚波罗";
	pArrow->stand();
	cout << "迪亚波罗真走运\n";
}

void Boss::visit(RequiemArrow * pArrow)
{
	cout << "迪亚波罗";
	pArrow->requiem();
	cout << "帝王始终是迪亚波罗\n";
}

void GioGio::visit(StandArrow * pArrow)
{
	cout << "茸茸";
	pArrow->stand();
	cout << "但是没啥用\n";
}

void GioGio::visit(RequiemArrow * pArrow)
{
	cout << "茸茸";
	pArrow->requiem();
	cout << "迪亚波罗用到到不了死亡的真实\n";
}