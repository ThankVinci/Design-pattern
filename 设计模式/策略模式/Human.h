#pragma once
#include "Driver.h"
#include "Gashat.h"
class Human
{
private:
	string m_name;
	IDriver* m_pDriver = nullptr;
	IGashat* m_pGashat = nullptr;
public:
	void henshin();
	void SetDriver(IDriver* driver);
	void SetGashat(IGashat* gashat);
	IDriver* GetDriver();
	IGashat* GetGashat();
};

