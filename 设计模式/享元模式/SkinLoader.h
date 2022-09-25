#pragma once
#include "stdafx.h"
enum Block { Dirt, Grass, Stone };

class SkinLoader
{
public:
	static SkinLoader* GetInstance();
public:
	string load(Block id);
public:
	bool isExist(Block id);
	void Add(Block id,string name);
	string Get(Block id);
private:
	map<Block, string> res;
private:
	static SkinLoader* g_instance;
	SkinLoader();
};

