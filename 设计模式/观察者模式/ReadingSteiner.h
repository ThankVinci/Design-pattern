#pragma once
#include "stdafx.h"
class ReadingSteiner
{
protected:
	string m_name;
public:
	ReadingSteiner(string name) :m_name(name) {}
	virtual void response(double value) {}
	virtual void implement() = 0;
	~ReadingSteiner() {
		cout << m_name << "离开了这个世界\n";
	}
};

class Kyoma :public ReadingSteiner 
{
public:
	Kyoma(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "感知到世界线发生变动，当前世界线的变动率为：" << setprecision(2) << value * 100 << "%，";
		if (value < 0) {
			cout << m_name << "放弃了思考\n";
		}
		else if (value < 0.01) {
			cout << m_name << "坏掉了\n";
		}
		else if (value == 0.01048596) {
			cout << m_name << "终于到达了命运石之门的世界线\n";
		}
		else if (value < 0.02 && value != 0.01048596) {
			cout << m_name << "当现充中\n";
		}
		else {
			cout << m_name << "人麻了\n";
		}
	}
	virtual void implement() {}
};

class Tina :public ReadingSteiner
{
public:
	Tina(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "感知到世界线发生变动，感觉一切很熟悉\n";
	}
	virtual void implement() {}
};


class Duduru :public ReadingSteiner
{
public:
	Duduru(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		cout << m_name << "感知到世界线发生变动，做了个噩梦\n";
	}
	virtual void implement() {}
};

class PocketWatch :public ReadingSteiner
{
public:
	PocketWatch(string name) :ReadingSteiner(name) {}
	virtual void response(double value) {
		if (value < 0.01) {
			cout << m_name << "感知到世界线发生变动，麻了\n";
		}
		else {
			cout << m_name << "感知到世界线发生变动，于是给自己上了发条\n";
		}
		
	}
	virtual void implement() {}
};