#include "SkinLoader.h"

SkinLoader* SkinLoader::g_instance = new SkinLoader;

SkinLoader::SkinLoader(){}

SkinLoader* SkinLoader::GetInstance()
{
	return g_instance;
}

string SkinLoader::load(Block id)
{
	if (!isExist(id)) {
		string name;
		switch (id)
		{
		case Dirt:
			name = "Res:Dirt";
			break;
		case Grass:
			name = "Res:Grass";
			break;
		case Stone:
			name = "Res:Stone";
			break;
		default: 
			return "加载不到该资源";
		}
		Add(id, name);
		cout << "从磁盘上加载资源，用时1s" << endl;
	}
	return Get(id);
}

bool SkinLoader::isExist(Block id)
{
	map<Block,string>::const_iterator m_iter = res.find(id);
	if (m_iter != res.cend()) return true;
	return false;
}

void SkinLoader::Add(Block id, string name)
{
	pair<Block, string> kv(id,name);
	res.insert(kv);
}

string SkinLoader::Get(Block id)
{
	map<Block, string>::const_iterator m_iter = res.find(id);
	string name = m_iter->second;
	return name;
}
