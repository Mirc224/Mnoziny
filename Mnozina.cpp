#include "Mnozina.h"



Mnozina::Mnozina()
{
}

Mnozina Mnozina::operator|(const Mnozina & othrs)
{
	Mnozina temp = Mnozina();
	for (auto &cislo : othrs.m_mnozina)
	{
		temp.pridajCislo(cislo);
	}
	for (auto &cislo : this->m_mnozina)
	{
		temp.pridajCislo(cislo);
	}
	return temp;
}

Mnozina & Mnozina::operator=(const Mnozina & othrs)
{
	for (auto &p : othrs.m_mnozina)
	{
		m_mnozina.push_back(p);
	}
	return *this;
}

void Mnozina::pridajCislo(long cislo)
{
	if (std::find(m_mnozina.begin(), m_mnozina.end(), cislo) == m_mnozina.end())
	{
		m_mnozina.push_back(cislo);
	}
}



void Mnozina::vypisPrvky()
{
	for (auto &p : m_mnozina)
	{
		std::cout << std::to_string(p) << " ";
	}
	std::cout << std::endl;
}

Mnozina::~Mnozina()
{
}
