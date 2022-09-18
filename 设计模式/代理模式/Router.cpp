#include "Router.h"

Router::Router()
{
	modem = new Modem();
}

void Router::call(string account, string password)
{
	if (modem) modem->call(account, password);
}

void Router::addFilter(string url)
{
	filter.push_back(url);
}

void Router::access(string url)
{
	if (modem&&modem->loginStatus()) {
		auto findFilter = [url](const string& filter) {
			if (url.find(filter, 0) == string::npos) return false;
			 return true;
		};
		vector<string>::const_iterator it = find_if(filter.cbegin(), filter.cend(), findFilter);
		if (it != filter.cend()) {
			cout<<"��������������ֹ���ʸ���վ��"<< url <<endl;
			return;
		}
		else {
			modem->access(url);
		}
	}
	else {
		cout << "������Ȩ��" << endl;
	}
}
