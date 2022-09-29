#include "WorldLine.h"

int main()
{
	WorldLine worldline;

	worldline.Add(shared_ptr<ReadingSteiner>(new Kyoma("凤凰院凶真")));
	worldline.Add(shared_ptr<ReadingSteiner>(new Duduru("真由理")));
	worldline.Add(shared_ptr<ReadingSteiner>(new Tina("克里斯提娜")));
	worldline.Add(shared_ptr<ReadingSteiner>(new PocketWatch("真由理的怀表")));

	worldline.change(0.008);
	worldline.change(0.01);
}