#pragma once
/*
* 策略模式：定义了算法家族，分别封装起来，让它们之间可以互相替换，此模式让算法的变化，不会影响到使用算法的客户
*/

class Strategy
{
public:
	Strategy() {};
	virtual ~Strategy() {};

public:
	virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
	ConcreteStrategyA() : Strategy() {};

	void AlgorithmInterface();
};