#include "Expression.h"

static void split_string(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
	std::string::size_type pos1, pos2;
	pos2 = s.find(c);
	pos1 = 0;
	while (std::string::npos != pos2)
	{
		v.push_back(s.substr(pos1, pos2 - pos1));

		pos1 = pos2 + c.size();
		pos2 = s.find(c, pos1);
	}
	if (pos1 != s.length())
		v.push_back(s.substr(pos1));
}

void TerminalExpression::add(string end)
{
	m_endVec.push_back(end);
}

bool TerminalExpression::Interpret(const string& context)
{
	vector<string>::iterator it = find(m_endVec.begin(),m_endVec.end(),context);
	if (it == m_endVec.end()) {
		return false;
	}
	return true; //ֻҪ�ҵõ�����һ���ս���ʽ��������true
}

Expression::Expression(IExpression * type)
{
	m_type = type;
}

bool Expression::Interpret(const string& context)
{

	string context_cpy = context;
	size_t endIndex = context_cpy.find_last_of(';');
	if (endIndex == string::npos) {
		cout << "û����;��β���쳣����\n";
		return false;
	}
	while (endIndex != string::npos) {
		context_cpy = string(context_cpy, 0, endIndex); //ȥ��ĩβ�����зֺ�
		endIndex = context_cpy.find_last_of(';');
	}
	vector<string> splitVec;
	split_string(context_cpy,splitVec," "); //���տո�ȥ����Ӵ�
	auto it = splitVec.begin();
	string type,name,value;
	if (m_type->Interpret(*it)) {
		type = *it++;
		if (it == splitVec.end()) {
			cout << "û�ж������������Ч\n";
			return false;
		}
		name = *it++;
		if (it != splitVec.end()) {
			if ((it++)->_Equal("=")) {
				if (it == splitVec.end()) {
					cout << "��Ч��ֵ\n";
					return false;
				}
				value = *it;
			}
		}
		cout << "����Ϊ��" << type << "\n";
		cout << "������Ϊ��" << name << "\n";
		cout << "ֵΪ��" << value << "\n";
	}
	else {
		cout << "��Ч������\n";
		return false;
	}
	
	return true;
}

