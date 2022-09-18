#include "Internet.h" 

void Modem::access(string url)
{
	if (isLogin) cout << "冲浪中：" << url << endl;
	else cout << "无网络权限" << endl;
}

Internet::Internet()
{
	isLogin = false;
}



void Internet::call(string account, string password)
{
	if (account.length() && password.length()) {
		isLogin = true; //当账号密码不为空就算通过了
		cout << "拨号成功" << endl;
	}
	else {
		isLogin = false;
	}
}

bool Internet::loginStatus()
{
	return isLogin;
}
