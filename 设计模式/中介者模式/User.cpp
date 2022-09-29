#include "User.h"

int User::g_id = 0;

User::User() :m_id(g_id++) {
	m_chatrrom = ChatRoom::GetInstance();
	login();
}
void User::login()
{
	m_chatrrom->login(m_id, shared_ptr<User>(this));
}
void User::logout()
{
	m_chatrrom->logout(m_id);
}
void User::send(int rid, string msg) {
	cout << "User[" << m_id << "]����������Ϣ��User[" << rid << "]��" << msg << "\n";
	m_chatrrom->send(m_id, rid, msg);
}
void User::receive(int sid, string msg) {
	cout << "User[" << m_id << "]���յ�����User[" << sid << "]����Ϣ��" << msg << "\n";
}

User::~User()
{
	cout << "User[" << m_id << "]�ǳ���\n";
}
