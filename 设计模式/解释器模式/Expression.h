#pragma once
#include "stdafx.h"
//抽象的语法树接口
class IExpression
{
public:
	virtual bool Interpret(const string& context) = 0;
};

//普通的表达式
class Expression :public IExpression {
public:
	Expression(IExpression* type);
	virtual bool Interpret(const string& context);
private:
	IExpression* m_type;
};

//终结表达式类型
class TerminalExpression :public IExpression {
public:
	void add(string end);
	virtual bool Interpret(const string& context);
private:
	vector<string> m_endVec;
};