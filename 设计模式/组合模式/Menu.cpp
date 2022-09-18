#include "Menu.h"

Menu::Menu(string name,bool isfile):i_Item(name,isfile)
{
}

void Menu::Add(i_Item* item)
{
	subItem.push_back(item);
}
