#pragma once
#include <cstring>
#include <stdio.h>

class Car {
protected:
	int speed;
	char name[40];

public:
	int gear;
	Car() {}
	~Car() {}
	Car(int s, const char* n, int g)
		: speed(s), gear(g) {
		strcpy_s(name, n);
	}
	/*
	Car(int s, char* n int g) {
		speed = 's';
		gear = 'g';
		strcpy(name, n)
	}
	*/
	void changeGear(int g = 4) { // g = 4 는 디폴트 매개변수
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : 기어 = %d단, 속도 = %d km/h\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %x\n", this);
	}

};
