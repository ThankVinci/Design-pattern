#include "Visitor.h"
#include "Arrow.h"

void Boss::visit(StandArrow * pArrow)
{
	cout << "���ǲ���";
	pArrow->stand();
	cout << "���ǲ���������\n";
}

void Boss::visit(RequiemArrow * pArrow)
{
	cout << "���ǲ���";
	pArrow->requiem();
	cout << "����ʼ���ǵ��ǲ���\n";
}

void GioGio::visit(StandArrow * pArrow)
{
	cout << "����";
	pArrow->stand();
	cout << "����ûɶ��\n";
}

void GioGio::visit(RequiemArrow * pArrow)
{
	cout << "����";
	pArrow->requiem();
	cout << "���ǲ����õ���������������ʵ\n";
}