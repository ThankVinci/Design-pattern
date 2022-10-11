#pragma once
#include "stdafx.h"
//������﷨���ӿ�
class IExpression
{
public:
	virtual bool Interpret(const string& context) = 0;
};

//��ͨ�ı��ʽ
class Expression :public IExpression {
public:
	Expression(IExpression* type);
	virtual bool Interpret(const string& context);
private:
	IExpression* m_type;
};

//�ս���ʽ����
class TerminalExpression :public IExpression {
public:
	void add(string end);
	virtual bool Interpret(const string& context);
private:
	vector<string> m_endVec;
};