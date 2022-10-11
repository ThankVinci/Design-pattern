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
	return true; //只要找得到任意一个终结表达式，都返回true
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
		cout << "没有以;结尾，异常结束\n";
		return false;
	}
	while (endIndex != string::npos) {
		context_cpy = string(context_cpy, 0, endIndex); //去除末尾的所有分号
		endIndex = context_cpy.find_last_of(';');
	}
	vector<string> splitVec;
	split_string(context_cpy,splitVec," "); //按照空格去获得子串
	auto it = splitVec.begin();
	string type,name,value;
	if (m_type->Interpret(*it)) {
		type = *it++;
		if (it == splitVec.end()) {
			cout << "没有定义变量名，无效\n";
			return false;
		}
		name = *it++;
		if (it != splitVec.end()) {
			if ((it++)->_Equal("=")) {
				if (it == splitVec.end()) {
					cout << "无效赋值\n";
					return false;
				}
				value = *it;
			}
		}
		cout << "类型为：" << type << "\n";
		cout << "变量名为：" << name << "\n";
		cout << "值为：" << value << "\n";
	}
	else {
		cout << "无效类型名\n";
		return false;
	}
	
	return true;
}

