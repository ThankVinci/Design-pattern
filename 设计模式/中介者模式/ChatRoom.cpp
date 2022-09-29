#include "ChatRoom.h"
#include "User.h"

ChatRoom* ChatRoom::g_instance = new ChatRoom;

ChatRoom* ChatRoom::GetInstance() {
	return g_instance;
}

void ChatRoom::login(int id, shared_ptr<User> userSptr) {
	pair<int, shared_ptr<User>> useridKV;
	useridKV.first = id;
	useridKV.second = userSptr;
	m_useridMap.insert(useridKV);
	cout << "User[" << id << "]进入聊天室" << "\n";
}

void ChatRoom::logout(int id) {
	if (m_useridMap.find(id) != m_useridMap.cend())
	{
		m_useridMap.erase(id);
	}
}

shared_ptr<User> ChatRoom::find(int id) {
	return m_useridMap.find(id)->second;
}

void ChatRoom::send(int sid, int rid, string msg) {
	if (m_useridMap.find(rid) != m_useridMap.cend()) {
		find(rid)->receive(sid, msg);
	}
	else {
		cout << "User["<<sid<<"]发送消息失败，目标User不在线\n" ;
	}
}