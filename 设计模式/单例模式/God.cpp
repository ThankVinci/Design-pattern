#include "God.h"

//����ʽ+���̰߳�ȫ
mutex g_mutex; //������

God::God()
{
}

God* God::g_instance = nullptr;
God * God::GetInstance()
{
	if (g_instance == nullptr) {
		//�������뿪{}��Χ�ͷ�
		lock_guard<mutex> lock(g_mutex);
		if (g_instance == nullptr) {
			g_instance = new God();
		}
	}
	return g_instance;
}

/* ����ʽ
God* God::g_instance = new God();
God* God::GetInstance()
{
	return g_instance;
}
*/