#pragma once
#include "stdafx.h"
//������﷨���ӿ�
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
			//�����õ������ַ�������keyword���Ӵ����������λ��ǰ��û�г��˿հ׷�֮��ķ��ţ�û�еĻ��Ϳ������½���
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
		//�ӹؼ��ֿ�ʼȥ�����׸�{���ҵõ��Ļ�����ǰ���������������
		size_t index2 = index1 + keyword.length();
		string classname = "";
		if ((index2 = context.find_first_of("{", index1 + keyword.length())) != string::npos) {
			//�ж�����ؼ���ǰ������ɸ��ַ��ǲ���\n���߿ո񣬲��ǵĻ��ͷ���false�ǵĻ������½�����
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
		classMap.insert(pair<string, string>("������", classname));
		//�ҵ���һ��}����ʾ���β�ˣ��������}�����Ǻ�����}�����ԾͲ��Ӻ�����
		size_t index3 = index2+1;
		if ((index3 = context.find_first_of("}"))) {
			
		}
		else {
			return false;
		}
		//��index2��index3֮��Ĳ��־ͽ������Ա�Ľ�����
		string classinter = context.substr(index2+1,index3-(index2+1));
		bool ret = MemberExpression().Interpret(classinter);
		if (!ret) {
			return ret;
		}
		return true;
	}
};

