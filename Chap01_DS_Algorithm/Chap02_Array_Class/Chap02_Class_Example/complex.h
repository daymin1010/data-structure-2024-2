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
	void read(char* msg = "���Ҽ�= ") {
		printf(" %s ", msg);
		printf("%lf%lf", &real, &imag);
	}
	void print(const char* msg = "���Ҽ�= ") {
		printf(" %s %4.3f + %4.2f i\n", msg, real, imag);
	}
	void add(Complex a, Complex b) {

	}
	}
	
};
