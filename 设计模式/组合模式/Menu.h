#pragma once
#include "i_Item.h"
class Menu:public i_Item
{
public:
	Menu(string name,bool isfile=false);
	virtual void Add(i_Item* item);
};

