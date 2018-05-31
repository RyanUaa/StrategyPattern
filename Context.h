//Context.h
#pragma once

class Strategy;

class Context
{
	public:
		Context(Strategy* stg);
		virtual ~Context();

		virtual void DoSomething();
	private:
		Strategy* _stg;
};
