#pragma once
#include "SkinLoader.h"
#include "stdafx.h"

class IBlock
{
private:
	Block m_res_id; //��Դid
	string m_res; //Ҫ���ص���Դ
	SkinLoader* m_loader; //������
public:
	IBlock(Block bid);
	virtual void draw(int x, int y);
};

