#include "Jumping.h"

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
