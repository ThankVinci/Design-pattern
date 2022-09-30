#pragma once
#include "stdafx.h"
//抽象的语法树接口
class IExpression
{
protected:
	map<string, string> classMap;
	map<string, vector<string>> memberMap;
public:
	virtual bool Interpret(const string& context) = 0;
};

//

class MemberExpression :public IExpression {
public:
	virtual bool Interpret(const string& context) {
		size_t lastEnd = context.find_last_of(";");
		const char* contextcstr = context.c_str();
		for (size_t i = 0; i < lastEnd; i++) {
			size_t index1 = context.find_first_of(";", i);
			char c;
			string type = "";
			string var = "";
			size_t index2 = 0;
			for (size_t j = i; j != index1; j++) {
				c = contextcstr[j];
				if (c != ' ' && c != '\n' && c != '\t') {
					type.push_back(c);
					if (contextcstr[j + 1] == ' ' || contextcstr[j + 1] == '\n' || contextcstr[j + 1] == '\t') {
						index2 = j + 1;
						break;
					}
				}
			}
			for (size_t j = index2; j != index1; j++) {
				c = contextcstr[j];
				if (c != ' ' && c != '\n' && c != '\t') {
					var.push_back(c);
					if (contextcstr[j + 1] == ' ' || contextcstr[j + 1] == '\n' || contextcstr[j + 1] == '\t') {
						break;
					}
				}
			}
			map<string, vector<string>>::iterator iter = memberMap.find(type);
			if (iter != memberMap.cend()) {
				iter->second.push_back(var);
			}
			else {
				vector<string> vec;
				vec.push_back(var);
				pair<string, vector<string>> kv(type, vec);
				memberMap.insert(kv);
			}
			i = index1 + 1;

		}
		return true;
	}
};

class ClassExpression :public IExpression 
{
public:
	virtual bool Interpret(const string& context) {
		string keyword = "class";
		size_t index1 = 0;
		const char* contextcstr = context.c_str();
		if ((index1 = context.find(keyword)) != string::npos) {
			//如果查得到整个字符串符合keyword的子串，就找这个位置前有没有除了空白符之外的符号，没有的话就可以往下解析
			size_t i = index1;
			char c;
			for (size_t j = 0; j != i;j++) {
				if (contextcstr[j] != ' ' && contextcstr[j] != '\n' && contextcstr[j] != '\t') {
					return false;
				}
			}
		}
		else {
			return false;
		}
		//从关键字开始去查找首个{，找得到的话就往前遍历把类名查出来
		size_t index2 = index1 + keyword.length();
		string classname = "";
		if ((index2 = context.find_first_of("{", index1 + keyword.length())) != string::npos) {
			//判断这个关键字前面的若干个字符是不是\n或者空格，不是的话就返回false是的话就往下解析。
			char c;
			for (size_t j = index1 + keyword.length(); j != index2; j++) {
				c = contextcstr[j];
				if (c != ' '&&c != '\n'&&c != '\t') {
					classname.push_back(c);
				}
			}
		}
		else {
			return false;
		}
		classMap.insert(pair<string, string>("类名：", classname));
		//找到第一个}，表示类结尾了，但是这个}可能是函数的}，所以就不加函数了
		size_t index3 = index2+1;
		if ((index3 = context.find_first_of("}"))) {
			
		}
		else {
			return false;
		}
		//在index2和index3之间的部分就交给类成员的解析器
		string classinter = context.substr(index2+1,index3-(index2+1));
		bool ret = MemberExpression().Interpret(classinter);
		if (!ret) {
			return ret;
		}
		return true;
	}
};

