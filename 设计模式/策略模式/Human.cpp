#include "Human.h"

void Human::henshin()
{
	if (m_pGashat == nullptr) {
		cout << "没有卡带，变身失败" << endl;
		return;
	}
	if (m_pDriver == nullptr && m_pGashat->GetType() != Gashat::Direct) {
		cout << "没有腰带，变身失败" << endl;
		return;
	}
	if (m_pDriver == nullptr) {
		cout << "使用" << m_pGashat->GetGashat() << "变身" << endl;
	}
	else {
		cout << "使用" << m_pDriver->GetDriver() << "和" << m_pGashat->GetGashat() << "变身" << endl;
	}
}

void Human::SetDriver(IDriver * driver)
{
	m_pDriver = driver;
}

void Human::SetGashat(IGashat* gashat)
{
	m_pGashat = gashat;
}

IDriver * Human::GetDriver()
{
	return m_pDriver;
}

IGashat * Human::GetGashat()
{
	return m_pGashat;
}
