#pragma once
#include <iostream>
 class Treangle
{
private:
	int a, b, alfa;
public:
	int get_a() {
		return a;
	}
	int set_a(int val) {
		if (val > 0) 
			a = val;
		else 
			throw "—торона должена лежать в диапозоне (0; бесконечности)!";
	}
	int get_b() {
		return b;
	}
	int set_b(int val) {
		if (val > 0)
			b = val;
		else
			throw "—торона должена лежать в диапозоне (0; бесконечности)!";
	}
	int get_alfa() {
		return alfa;
	}
	int set_alfa(int val) {
		if ((val > 0)&&(val > 180)) {
			alfa = val;
		}
		throw "”гол должен лежать в диапозоне (0; 180)!";
	}

	Treangle(int _a, int _b, int _alfa) {
		set_a(_a);
		set_b(_b);
		set_alfa(_alfa);
	}

	Treangle() {

	}

	~Treangle() {
		std::cout << "Treangle deleted" << std::endl;
	}

public:
	int Procent_alfa(int pr);
	string Vid_treangle();
	double Okr();
	int c();
	void Angles(int* mas);
	void Angles1(int* mas);
};

