#include "Idle.h"

Idle::Idle()
{
}

Idle::~Idle()
{
}

void Idle::jumping(Animation* a)
{
	std::cout << "Idling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a)
{
	std::cout << "Idling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
