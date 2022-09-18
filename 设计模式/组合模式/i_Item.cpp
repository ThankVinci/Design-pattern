#include "i_Item.h"

i_Item::i_Item(string name,bool isfile):m_sname(name),isFile(isfile)
{
}

void i_Item::show(string tab)
{
	cout <<tab << m_sname << endl;
	for (i_Item* item : subItem) {
		item->show("  " + tab);
	}
}
