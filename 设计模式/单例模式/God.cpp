#include "God.h"

//懒汉式+多线程安全
mutex g_mutex; //互斥量

God::God()
{
}

God* God::g_instance = nullptr;
God * God::GetInstance()
{
	if (g_instance == nullptr) {
		//加锁，离开{}范围释放
		lock_guard<mutex> lock(g_mutex);
		if (g_instance == nullptr) {
			g_instance = new God();
		}
	}
	return g_instance;
}

/* 饿汉式
God* God::g_instance = new God();
God* God::GetInstance()
{
	return g_instance;
}
*/