#include "pch.h"
#include <iostream>
#include "rownanieKwadratowe.h"
#include "rownanieWyjatki.h"

int main()
{
	std::cout << "#### Lista 3 ####" << std::endl;
	rownanieKwadratowe rownaniePierwsze(1, 2, 1);
	try {
		std::cout << "Pierwsze miejsce szerowe to: " << rownaniePierwsze.podajMiejsceZerowe(1) << std::endl;
		std::cout << "Drugie miejsce zerowe to: " << rownaniePierwsze.podajMiejsceZerowe(2) << std::endl;
		cout << rownaniePierwsze.podajMiejsceZerowe(30) << endl;
	}
	catch (rownanieWyjatki wyjatek) {
		std::cout << wyjatek.what() << endl;
	}
	
	
	
}

