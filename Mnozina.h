#pragma once
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
class Mnozina
{
public:
	Mnozina();
	Mnozina operator|(const Mnozina& othrs);
	Mnozina& operator=(const Mnozina& othrs);
	void pridajCislo(long cislo);
	void vypisPrvky();
	virtual ~Mnozina();
private:
	std::vector<long> m_mnozina;
};

