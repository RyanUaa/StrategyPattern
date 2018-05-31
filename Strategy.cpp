//Strategy.cpp

#include "Strategy.h"
#include <iostream>
using namespace std;

Strategy::Strategy(){}

Strategy::~Strategy()
{
	cout<<"~Strategy..."<<endl;
}

ConcreteStrategyA::ConcreteStrategyA(){}

ConcreteStrategyA::~ConcreteStrategyA()
{
	cout<<"~ConcreteStrategyA..."<<endl;
}

void ConcreteStrategyA::AlgrithmInterface()
{
	cout<<"I am A Algrithm..."<<endl;
}

ConcreteStrategyB::ConcreteStrategyB(){}

ConcreteStrategyB::~ConcreteStrategyB()
{
	cout<<"~ConcreteStrategyB..."<<endl;
}

void ConcreteStrategyB::AlgrithmInterface()
{
	cout<<"I am B Algrithm..."<<endl;
}
