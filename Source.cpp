#include <cmath>
#include "Header.h"

////OCTAEDER

double Octaedr::getS() { return pow(length, 2) * 2 * sqrt(3); }
double Octaedr::getV() { return pow(length, 3) * sqrt(2) / 3; }

////TETRAEDER

double Tetraeder::getS() { return pow(length, 2) * sqrt(3); }
double Tetraeder::getV() { return pow(length, 3) * sqrt(2) / 12; }

////CUBE

double Cube::getS() { return pow(length, 2) * 6; }
double Cube::getV() { return pow(length, 3); }
	



