#include "OperationClass.h"

double OperationAdd::GetResult(const double nNumberA, const double nNumberB)
{
	double nRes = 0.0;
	nRes = nNumberA + nNumberB;
	return nRes;
}

double OperationSub::GetResult(const double nNumberA, const double nNumberB)
{
	double nRes = 0.0;
	nRes = nNumberA - nNumberB;
	return nRes;
}

double OperationMulti::GetResult(const double nNumberA, const double nNumberB)
{
	double nRes = 0.0;
	nRes = nNumberA * nNumberB;
	return nRes;
}

double OperationDivide::GetResult(const double nNumberA, const double nNumberB)
{
	double nRes = 0.0;
	if (nNumberB == 0)
	{
		std::cout << "cannot divide 0!" << std::endl;
	}
	nRes = nNumberA / nNumberB;
	return nRes;
}

double OperationClass::GetResult(const double nNumberA, const double nNumberB)
{
	return 0.0;
}
