#include "Human.h"

void Human::henshin()
{
	if (m_pGashat == nullptr) {
		cout << "û�п���������ʧ��" << endl;
		return;
	}
	if (m_pDriver == nullptr && m_pGashat->GetType() != Gashat::Direct) {
		cout << "û������������ʧ��" << endl;
		return;
	}
	if (m_pDriver == nullptr) {
		cout << "ʹ��" << m_pGashat->GetGashat() << "����" << endl;
	}
	else {
		cout << "ʹ��" << m_pDriver->GetDriver() << "��" << m_pGashat->GetGashat() << "����" << endl;
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
