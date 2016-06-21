#pragma once
#include <iostream>

class CBaseAI
{
public:
	CBaseAI();
	virtual ~CBaseAI();

	virtual const bool Step(const int delta) = 0;
};
