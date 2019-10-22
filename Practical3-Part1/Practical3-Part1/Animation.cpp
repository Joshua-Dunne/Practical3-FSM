#include "Animation.h"

Animation::Animation() : m_current{ new Idle() }, m_previous{ new Idle() }
{
}

void Animation::idle()
{
	m_current->idle(this);
	m_jumping = false;
	m_climbing = false;
}

void Animation::jumping()
{
	if (!m_jumping)
	{
		m_current->jumping(this);
		m_jumping = true;
		m_climbing = false;
	}
	
}

void Animation::climbing()
{
	if (!m_climbing)
	{
		m_current->climbing(this);
		m_jumping = false;
		m_climbing = true;
	}
}
