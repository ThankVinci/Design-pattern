#pragma once
#include "stdafx.h"
//抽象的项类型
class i_Item
{
private:
	string m_sname;//项名
	bool isFile; //是否是文件
protected:
	vector<i_Item*> subItem; //子项
public:
	i_Item(string name,bool isfile);
	void show(string tab);
	virtual void Add(i_Item* item) = 0;
};

