#include "pch.h"
#include "rownanieWyjatki.h"
#include<stdexcept>

using namespace std;

rownanieWyjatki::rownanieWyjatki(const int& przekazaneMiejsceZerowe) {
	komunikat = "Brak oczekiwanego miejsca zerowego. Oczekiwane miejsce zerowe to : "
		+ to_string(przekazaneMiejsceZerowe);
}

const char* rownanieWyjatki::what() const throw() {
	return komunikat.c_str();
}