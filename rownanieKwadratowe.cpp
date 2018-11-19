#include "pch.h"
#include "rownanieWyjatki.h"
#include "rownanieKwadratowe.h"
#include <cmath>
#include <iostream>
#include<stdexcept>

rownanieKwadratowe::rownanieKwadratowe(double x, double y, double z) {
	a = x;
	b = y;
	c = z;
}

double rownanieKwadratowe::podajMiejsceZerowe(unsigned int ktoreMiejsceZerowe) {
	double delta = pow(b, 2) - (4 * a*c);
	if (ktoreMiejsceZerowe == 1 || ktoreMiejsceZerowe == 2) {
		if (ktoreMiejsceZerowe == 1) {
			if (delta > 0) {
				return (-1 * b - sqrt(delta)) / (2 * a);
			}
			else if (delta == 0) {
				return (-1 * b) / (2 * a);
			}
			else {
				
				throw rownanieWyjatki(ktoreMiejsceZerowe);
			}

		}
		if (ktoreMiejsceZerowe == 2) {
			if (delta > 0) {
				return (-1 * b + sqrt(delta)) / (2 * a);
			}
			else if (delta == 0) {
				return (-1 * b) / (2 * a);
			}
			else {
				throw rownanieWyjatki(ktoreMiejsceZerowe);

			}
		}

	}
	throw rownanieWyjatki(ktoreMiejsceZerowe);
}