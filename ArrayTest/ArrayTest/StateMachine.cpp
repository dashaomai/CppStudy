#include "StateMachine.h"


CStateMachine::CStateMachine()
{
	std::cout << "Now we construct all AI sub system." << std::endl;

	_ais[0] = new CIdelAI();
	_ais[1] = new CAttackAI();
}


CStateMachine::~CStateMachine()
{
	std::cout << "Now we destruct all AI sub system." << std::endl;

	delete _ais[0];
	delete _ais[1];

	// �����ͷŷ������ᱨ�쳣
	// delete[] _ais;
}
