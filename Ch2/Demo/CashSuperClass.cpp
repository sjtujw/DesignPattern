#include "CashSuperClass.h"

double CashSuperClass::AcceptCash(double money)
{
	return 0;
}

double CashNormal::AcceptCash(double money)
{
	return money;
}

double CashRebate::AcceptCash(double money)
{
	double nRes = 0.0;
	nRes = money * m_nRebate / 100.0;
	return nRes;
}

double CashReturn::AcceptCash(double money)
{
	int n = money / m_nCondition;
	return money - m_nReturn * n;
}

CashSuperClass* CashFactory::CreateCashAccept(int nType)
{
	CashSuperClass* cs = nullptr;
	switch (nType)
	{
	case 1:
		// 正常收费
	{
		CashNormal* cs1 = new CashNormal();
		cs = cs1;
		break;
	}
	case 2:
		// 打折收费
	{
		CashRebate* cs2 = new CashRebate(80);
		cs = cs2;
		break;
	}
	case 3:
		// 满减收费
	{
		CashReturn* cs3 = new CashReturn(100, 10);
		cs = cs3;
		break;
	}
	default:
	{
		break;
	}
	}
	return cs;
}
