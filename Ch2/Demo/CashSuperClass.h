#pragma once
#include <iostream>

class CashSuperClass
{
public:
	CashSuperClass() {};
	virtual ~CashSuperClass() {};

	virtual double AcceptCash(double money) = 0;
};

// 正常收费
class CashNormal : public CashSuperClass
{
public:
	CashNormal() : CashSuperClass() {};
	double AcceptCash(double money);
};

// 打折收费
class CashRebate : public CashSuperClass
{
public:
	CashRebate(int nRebate) : CashSuperClass()
	{
		m_nRebate = nRebate;
	}
	double AcceptCash(double money);

private:
	int m_nRebate = 0;
};

// 满减收费
class CashReturn : public CashSuperClass
{
public:
	CashReturn(int nCondition, int nReturn) :CashSuperClass()
	{
		m_nCondition = nCondition;
		m_nReturn = nReturn;
	}
	double AcceptCash(double money);
private:
	int m_nCondition = 0;
	int m_nReturn = 0;
};

// 工厂模式
class CashFactory
{
public:
	CashFactory() {};
	~CashFactory() {};

	CashSuperClass* CreateCashAccept(int nType);
};

// 策略模式
class CashContext
{
public:
	CashContext(int nType)
	{
		switch (nType)
		{
		case 1:
		{
			CashNormal* cs1 = new CashNormal();
			cs = cs1;
			break;
		}
		case 2:
		{
			CashRebate* cs2 = new CashRebate(80);
			cs = cs2;
			break;
		}
		case 3:
		{
			CashReturn* cs3 = new CashReturn(100, 15);
			cs = cs3;
			break;
		}
		}
	}
	~CashContext() {};

	double GetResult(double money)
	{
		return cs->AcceptCash(money);
	}
private:
	CashSuperClass* cs = nullptr;

};