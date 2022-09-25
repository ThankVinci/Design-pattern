#pragma once
#include "SkinLoader.h"
#include "stdafx.h"

class IBlock
{
private:
	Block m_res_id; //资源id
	string m_res; //要加载的资源
	SkinLoader* m_loader; //加载器
public:
	IBlock(Block bid);
	virtual void draw(int x, int y);
};

