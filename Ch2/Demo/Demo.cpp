// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CashSuperClass.h"

int main()
{
	std::cout << "please input activity type: \n" << "1: Normal\n2: Rebate\n3: ConditionReturn" << std::endl;
	int nType = 0;
	std::cin >> nType;
	CashFactory* xCash = new CashFactory();
	auto xClass = xCash->CreateCashAccept(nType);

	double nTotal = 850;
	double nRes = xClass->AcceptCash(nTotal);
	std::cout << "the final value is: " << nRes << std::endl;

	CashContext* xContext = new CashContext(nType);
	double nRes2 = xContext->GetResult(nTotal);
	std::cout << "the final value of strategy pattern is: " << nRes2 << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
