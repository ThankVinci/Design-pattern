#include "Internet.h" 

void Modem::access(string url)
{
	if (isLogin) cout << "�����У�" << url << endl;
	else cout << "������Ȩ��" << endl;
}

Internet::Internet()
{
	isLogin = false;
}



void Internet::call(string account, string password)
{
	if (account.length() && password.length()) {
		isLogin = true; //���˺����벻Ϊ�վ���ͨ����
		cout << "���ųɹ�" << endl;
	}
	else {
		isLogin = false;
	}
}

bool Internet::loginStatus()
{
	return isLogin;
}
