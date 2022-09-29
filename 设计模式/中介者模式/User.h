#pragma once
#include "stdafx.h"
#include "ChatRoom.h"

class User
{
private:
	int m_id;
	ChatRoom* m_chatrrom;
public:
	static int g_id;
	User();
	void login();
	void logout();
	void send(int rid, string msg);
	void receive(int sid, string msg);
	~User();
};