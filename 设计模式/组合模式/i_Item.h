#pragma once
#include "stdafx.h"
//�����������
class i_Item
{
private:
	string m_sname;//����
	bool isFile; //�Ƿ����ļ�
protected:
	vector<i_Item*> subItem; //����
public:
	i_Item(string name,bool isfile);
	void show(string tab);
	virtual void Add(i_Item* item) = 0;
};

