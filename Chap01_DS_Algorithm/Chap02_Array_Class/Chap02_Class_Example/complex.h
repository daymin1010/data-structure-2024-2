#pragma once

#include <cstdio>

class Complex
{
	double real;
	double imag;

public:
	void set(double r, double i) {
		real = r;
		imag = i;
	}
	void read(char* msg = "복소수= ") {
		printf(" %s ", msg);
		printf("%lf%lf", &real, &imag);
	}
	void print(const char* msg = "복소수= ") {
		printf(" %s %4.3f + %4.2f i\n", msg, real, imag);
	}
	void add(Complex a, Complex b) {

	}
	}
	
};
