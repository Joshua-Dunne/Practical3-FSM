#pragma once

#include "State.h"
#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"

class Animation
{
	class State* m_current;
public:
	Animation();
	void setCurrent(State* s) { m_current = s; };
	void idle();
	void jumping();
	void climbing();
};

