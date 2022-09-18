#pragma once
#include "ITaste.h"
class WATERMELONTASTE :public ITaste
{
public:
	WATERMELONTASTE(enum Taste taste=WATERMELON);
	virtual void implement();
};

