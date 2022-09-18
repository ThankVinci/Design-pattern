#pragma once
#include "i_Item.h"
class Item :public i_Item
{
public:
	Item(string name,bool isfile=true);
private:
	virtual void Add(i_Item* item) ;
};

