#include "Treangle.h"
#include <iostream>
using namespace std;

int Treangle::Procent_alfa(int pr) {
	set_alfa(((int)alfa+(alfa * pr/100)));
	}

string Treangle::Vid_treangle() {
	int _c = c();
	string s = "";
	a == b == _c ?  "Равносторонний" :
		a ==b|| b==_c || _c==a? "Равнобедренный" :
			"Разносторонний";
	return s;
	}

double Treangle::Okr() {
	double S = 0.5 * a * b * sin(alfa);
	int _c = c();
	double R_opis = a * b * _c / (4 * S);
	double R_vpis = 2 * S / (a + b + _c);
	return (sqrt(R_opis * R_opis - (2 * R_opis * R_opis)));
	}

int Treangle::c() {
	int c = sqrt(a * a + b * b + 2 * a * b * cos(alfa));//третья сторона
}

void Treangle::Angles(int* mas) {
	int _c = c();
	mas[0] = acos(pow(b, 2) + pow(_c, 2) -pow(a, 2) / 2 * b * _c);
	mas[1] = acos(pow(b, 2) + pow(_c, 2) - pow(a, 2) / 2 * a * _c);
	}