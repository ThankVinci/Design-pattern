#pragma once
#include "Visitor.h"
//抽象的箭
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
		cout << "激活替身\n";
	}
};

class RequiemArrow :public IArrow {
public:
	virtual void accept(IVisitor* visitor) {
		visitor->visit(this);
	}
	virtual void requiem() {
		cout << "替身进化为镇魂曲\n";
	}
};