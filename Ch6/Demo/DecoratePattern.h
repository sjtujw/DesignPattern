#pragma once
#include <iostream>

class Person1
{
public:
	Person1() {};
	Person1(std::string _name)
	{
		m_strName = _name;
	};
	~Person1() {};

	void Show()
	{
		std::cout << "decorator person: " << m_strName << std::endl;
	}
private:
	std::string m_strName;
};


class Finery1 : public Person1
{
public:
	void Decorate(Person1* component)
	{
		m_component = component;
	}

	void Show()
	{
		if (m_component != nullptr)
		{
			m_component->Show();
		}
	}
private:
	Person1* m_component;
};

class Tshirts1 : public Finery1
{
public:
	void Show()
	{
		std::cout << "T-shirt" << std::endl;
		Finery1::Show();
	}
};

class BigTrouser1 : public Finery1
{
public:
	void Show()
	{
		std::cout << "big trouser" << std::endl;
		Finery1::Show();
	}
};