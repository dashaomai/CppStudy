#pragma once

#include "BaseAI.h"
#include "IdelAI.h"
#include "AttackAI.h"

class CStateMachine
{
public:
	CStateMachine();
	~CStateMachine();

private:
	CBaseAI* _ais[2];
};

