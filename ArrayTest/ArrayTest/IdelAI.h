#pragma once

#include "BaseAI.h"

class CIdelAI :
	public CBaseAI
{
public:
	CIdelAI();
	~CIdelAI();

	virtual const bool Step(const int delta);
};
