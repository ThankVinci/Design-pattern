#pragma once
#include "stdafx.h"

class User;
class ChatRoom
{
private:
	map<int, shared_ptr<User>> m_useridMap; //ÓÃ»§µÄIDÓ³Éä
	static ChatRoom* g_instance;
	ChatRoom() {}
public:
	static ChatRoom* GetInstance();
	void login(int id, shared_ptr<User> userSptr);
	void logout(int id);
	shared_ptr<User> find(int id);
	void send(int sid, int rid, string msg);
};

