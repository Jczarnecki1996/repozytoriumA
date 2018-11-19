#pragma once
#include "pch.h"
#include <exception>
#include <string>
using namespace std;
#ifndef H_ROWNANIEWYJATKI
#define H_ROWNANIEWYJATKI

class rownanieWyjatki : public exception
{
	std::string komunikat;
public:
	rownanieWyjatki(const int&);

	const char* what() const throw();

};


#endif // !H_ROWNANIEWYJATKI

