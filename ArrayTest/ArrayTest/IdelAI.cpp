#include "IdelAI.h"

CIdelAI::CIdelAI()
{
	std::cout << "CIdelAI Construction" << std::endl;
}

CIdelAI::~CIdelAI()
{
	std::cout << "CIdelAI Destruction" << std::endl;
}

const bool CIdelAI::Step(const int delta)
{
	std::cout << "CIdelAI Step #" << delta << std::endl;

	return true;
}
