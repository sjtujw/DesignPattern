#pragma once
#include <iostream>

class GiveGift
{
public:
	GiveGift() {};
	~GiveGift() {};
	virtual void GiveDolls() {};
	virtual void GiveFlowers() {};
	virtual void GiveChocolate() {};
};

class SchoolGirl
{
public:
	SchoolGirl() {};
	SchoolGirl(std::string _name)
	{
		m_strName = _name;
	}
	~SchoolGirl() {};
	std::string GetName()
	{
		return m_strName;
	}
private:
	std::string m_strName = "";
};

class Pursuit : public GiveGift
{
public:
	Pursuit() {};
	Pursuit(SchoolGirl _mm)
	{
		mm = _mm;
	}

	void GiveDolls()
	{
		std::cout << mm.GetName() << "send you a doll" << std::endl;
	}

	void GiveFlowers()
	{
		std::cout << mm.GetName() << "send you flowers" << std::endl;
	}

	void GiveChocolate()
	{
		std::cout << mm.GetName() << "send you chocolate" << std::endl;
	}
private:
	SchoolGirl mm;
};

class Proxy : public GiveGift
{
public:
	Proxy()
	{
		gg = nullptr;
	}
	~Proxy() {};
	Proxy(SchoolGirl _mm)
	{
		gg = new Pursuit(_mm);
	}

	void GiveDolls()
	{
		gg->GiveDolls();
	}

	void GiveFlowers()
	{
		gg->GiveFlowers();
	}

	void GiveChocolate()
	{
		gg->GiveChocolate();
	}
private:
	Pursuit* gg;
};