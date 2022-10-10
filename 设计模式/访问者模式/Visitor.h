#pragma once
#include "stdafx.h"
//抽象的访问者
class StandArrow;
class RequiemArrow;
class IVisitor
{
public:
	virtual void visit(StandArrow* pArrow) = 0;
	virtual void visit(RequiemArrow* pArrow) = 0;
};

class Boss :public IVisitor {
public:
	virtual void visit(StandArrow* pArrow);
	virtual void visit(RequiemArrow* pArrow);
};

class GioGio :public IVisitor {
public:
	virtual void visit(StandArrow* pArrow);
	virtual void visit(RequiemArrow* pArrow);
};

