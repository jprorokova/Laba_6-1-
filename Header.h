#pragma once
#include <cmath>
class Mnogograniki {
protected:
	double length;
public:

	void setLength(double length) {
		this->length = length;
	}
	double getLength() { return this->length; }
	virtual double getS()=0;
	virtual double getV()=0;
};

class Octaedr :public Mnogograniki {
public:
	Octaedr(double side) { this->length = side; }
	double getS();
	double getV();
};
class Tetraeder :public Mnogograniki {
public:
	Tetraeder(double side) { this->length = side; }
	double getS();
	double getV();
};
class Cube :public Mnogograniki {
public:
	Cube(double side) { this->length = side; }
	double getS();
	double getV();
};
