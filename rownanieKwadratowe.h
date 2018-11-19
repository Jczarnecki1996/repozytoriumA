#pragma once
#include "pch.h"
#ifndef H_ROWNANIEKWADRATOWE
#define H_ROWNANIEKWADRATOWE

class rownanieKwadratowe
{
	double a, b, c;
public:
	rownanieKwadratowe(double, double, double);

	double podajMiejsceZerowe(unsigned int);

};

#endif // !H_ROWNANIEKWADRATOWE
