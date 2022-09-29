#pragma once
#include "ReadingSteiner.h"
//世界线类
class WorldLine
{
private:
	vector<shared_ptr<ReadingSteiner>> m_readingsteiners;
public:
	void Add(shared_ptr<ReadingSteiner> readingsteiner) {
		m_readingsteiners.push_back(readingsteiner);
	}
	void change(double value) {
		for (shared_ptr<ReadingSteiner> readingsteiner:m_readingsteiners) {
			readingsteiner->response(value);
		}
	}
};

