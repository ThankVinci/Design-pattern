#include "Driver.h"

IDriver::IDriver(string name,int count):m_name(name),m_slotcount(count)
{
}

string IDriver::GetDriver()
{
	return m_name;
}

GamerDriver::GamerDriver(string name, int count):IDriver(name,count)
{
}

BuggleDriver::BuggleDriver(string name, int count):IDriver(name, count)
{
}
