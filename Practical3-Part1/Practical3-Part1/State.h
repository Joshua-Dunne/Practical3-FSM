#pragma once
#include <iostream>

class Animation; // forward refence to animation class
class Jumping; // forward refence to jumping class
class Climbing; // forward refence to climbing class
class Idle; // forward refence to idle class

class State
{
public:
	virtual void idle(Animation* a) {};
	virtual void jumping(Animation* a) {};
	virtual void climbing(Animation* a) {};
};

