#include <iostream>

#include "StateMachine.h"

CStateMachine* sm;

void func1()
{
	sm = new CStateMachine();
}

void func2()
{
	delete sm;
}

int main(void)
{
	std::cout << "Started." << std::endl;

	func1();

	std::cout << "Finished." << std::endl;

	func2();

	return 0;
}