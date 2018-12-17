#include <iostream>
#include "Mnozina.h"
int main()
{
	Mnozina m1 = Mnozina();
	m1.pridajCislo(5);
	m1.pridajCislo(1);
	m1.pridajCislo(3);
	m1.pridajCislo(4);
	m1.pridajCislo(8);
	m1.pridajCislo(8);
	Mnozina m2 = Mnozina();
	m2.pridajCislo(9);
	m2.pridajCislo(2);
	m2.pridajCislo(8);
	m2.pridajCislo(1);
	Mnozina m3 = Mnozina();
	m3 = m1 | m2;
	m3.vypisPrvky();
	return 0;
}