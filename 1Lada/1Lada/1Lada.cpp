using namespace std;
#include <iostream>
#include "Treangle.h"
#include <vector>


int main()
{
	setlocale(0, "rus");
	vector<Treangle> treangles;
	cout << "Выберите действие\n";
	cout << "1 - создать треугольник по двум сторонам и углу между ними\n";
	cout << "2 - увеличить/уменьшить угол на заданный %\n";
	cout << "3 - определить вид треугльника\n";
	cout << "4 - растояние между центрами вписанной и описанной окружностями\n";
	cout << "5 - значения всех углов треугольника\n";
	int n;
	switch (n) {
	case 1: {
		Treangle t;
		int a, b, alfa;
		while (true) {
			try {				
				cout << "Введите сторону а\n";
				cin >> a;
				t.set_a(a);
				cout << "Введите сторону b\n";
				cin >> b;
				t.set_b(b);
				cout << "Введите угол между сторонами в радианах\n";
				cin >> alfa;
				t.set_alfa(alfa);
				treangles[0] = t;
				break;
			}
			catch (const char* error_message) { cout << error_message<<endl; }
		}
	}
	case 2: {

	}
	case 3: {

	}
	case 4: {

	}
	case 5: {

	}
	default: cout << "Введите значение из списка!\n";
	}
	system("pause");
}

