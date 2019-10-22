#pragma once

#include "State.h"
#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"


class Animation
{
	class State* m_current;
	class State* m_previous;
public:
	Animation();
	void setCurrent(State* s) { m_current = s; };
	void setPrevious(State* s) { m_previous = s; };
	State* getCurrent(){ return m_current; };
	State* getPrevious() { return m_previous; };
	void idle();
	void jumping();
	void climbing();

	bool m_jumping{ false };
	bool m_climbing{ false };
};

