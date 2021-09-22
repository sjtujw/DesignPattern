#pragma once
#include <iostream>

class Person
{
public:
	Person(std::string _name)
	{
		m_strName = _name;
	};
	~Person() {};

	void Show()
	{
		std::cout << "装扮的是：" << m_strName;
	}
private:
	std::string m_strName;
};

class Finery
{
public:
	Finery() {};
	~Finery() {};

	virtual void Show() = 0;
};

class TShirts : public Finery
{
public:
	TShirts() : Finery() {};

	void Show();
};

class BigTrouser : public Finery
{
public:
	BigTrouser() : Finery() {};
	void Show();
};