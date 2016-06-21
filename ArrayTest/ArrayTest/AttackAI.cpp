#include "AttackAI.h"

CAttackAI::CAttackAI()
{
	std::cout << "CIdelAI Construction" << std::endl;
}

CAttackAI::~CAttackAI()
{
	std::cout << "CAttackAI Destruction" << std::endl;
}

const bool CAttackAI::Step(const int delta)
{
	std::cout << "CIdelAI Step #" << delta << std::endl;

	return true;
}
