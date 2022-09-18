#pragma once
#include "stdafx.h"
#include "IBottle.h"
#include "ITaste.h"

//“˚¡œ¿‡
class IDrink
{
private:
	string m_drink;
protected:
	ITaste* m_pTaste;
	IBottle* m_pBottle;
public:
	IDrink(ITaste* pTaste,IBottle* pBottle, enum Drink drink);
	void show();
	virtual void implement() = 0;
};

