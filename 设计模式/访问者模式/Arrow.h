#pragma once
#include "Visitor.h"
//����ļ�
class IVisitor;
class IArrow 
{
public:
	virtual void accept(IVisitor* visitor) = 0;
};

class StandArrow :public IArrow{
public:
	virtual void accept(IVisitor* visitor) {
		visitor->visit(this);
	}
	virtual void stand() {
		cout << "��������\n";
	}
};

class RequiemArrow :public IArrow {
public:
	virtual void accept(IVisitor* visitor) {
		visitor->visit(this);
	}
	virtual void requiem() {
		cout << "�������Ϊ�����\n";
	}
};