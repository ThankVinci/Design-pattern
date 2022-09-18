#pragma once
#include "ITaste.h"
class ORANGETASTE:public ITaste
{
public:
	ORANGETASTE(enum Taste taste=ORANGE);
	virtual void implement();
};

