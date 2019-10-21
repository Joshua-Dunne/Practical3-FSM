#include <iostream>
#include <chrono>
#include <thread>
#include "Animation.h"

int main()
{
	Animation fsm; int i = 0;
	std::chrono::milliseconds dura(1000);

	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			std::this_thread::sleep_for(dura);
			i = 1;
		}
		else
		{
			fsm.climbing();
			std::this_thread::sleep_for(dura);
			i = 0;
		}
	}
}