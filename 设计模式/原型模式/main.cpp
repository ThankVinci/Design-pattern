#include "stdafx.h"
#include "MisakaFactory.h"
int main()
{
	MisakaFactory* bilibiliFactory = MisakaFactory::GetInstance();
	
	Misaka* iimoto1 = bilibiliFactory->generate();
	iimoto1->print();
	Misaka* iimoto2 = bilibiliFactory->generate();
	iimoto2->print();
	Misaka* iimoto3 = bilibiliFactory->generate();
	iimoto3->print();

	return 0;
}
