#pragma once
#include <string>
#include <map>
#include <iostream>

class OperationClass
{
public:
	OperationClass() {};
	virtual ~OperationClass() {};
	virtual double GetResult(const double nNumberA, const double nNumberB);
private:
};

class OperationAdd : public OperationClass
{
public:
	OperationAdd() : OperationClass() {};
	double GetResult(const double nNumberA, const double nNumberB) override;
};

class OperationSub : public OperationClass
{
public:
	OperationSub() : OperationClass() {};
	double GetResult(const double nNumberA, const double nNumberB) override;
};

class OperationMulti : public OperationClass
{
public:
	OperationMulti() : OperationClass() {};
	double GetResult(const double nNumberA, const double nNumberB) override;
};

class OperationDivide :public OperationClass
{
public:
	OperationDivide() : OperationClass() {};
	double GetResult(const double nNumberA, const double nNumberB) override;
};