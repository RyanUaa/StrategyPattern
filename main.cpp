#include "Context.h"
#include "Strategy.h"

#include <iostream>
using namespace std;

int main()
{
	Strategy* ps1 = new ConcreteStrategyA();
	Context* pc1 = new Context(ps1);
	pc1->DoSomething();
	Strategy* ps2 = new ConcreteStrategyB();
	Context* pc2 = new Context(ps2);
	pc2->DoSomething();
	if(NULL != pc1)
		delete pc1;
	if(NULL != pc2)
		delete pc2;
	return 0;
}
