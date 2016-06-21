#pragma once

#include "BaseAI.h"

class CAttackAI :
	public CBaseAI
{
public:
	CAttackAI();
	~CAttackAI();

	virtual const bool Step(const int delta);
};

