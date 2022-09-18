#pragma once
#include "ITaste.h"
class GRAPETASTE :public ITaste
{
public:
	GRAPETASTE(enum Taste taste=GRAPE);
	virtual void implement();
};

