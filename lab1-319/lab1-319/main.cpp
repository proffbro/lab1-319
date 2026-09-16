#include <iostream>
#include <windows.h>
using namespace std;

//фукція піднесеня до квадрату 
double kvadrat(double x) {
	return x * x;
}

int main() {

	// створеня виведення українських символів
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	// декларація змінних
	double a, b, c;

	// задача Begin9
	// умова задачі
	cout << "Задача Begin9" << endl;
	cout << "Дано два ненульових числа." << endl;
	cout << "Знайти суму, різницю, добуток і частку їх квадратів." << endl << endl;
	
	// введення змінних
	cout << "Ведіть перше значеня: ";
	cin >> a;
	cout << "Ведіть друге значеня: ";
	cin >> b;
	cout << endl;

	//Основний код
	cout << "Сума квадратів: " << kvadrat(a) + kvadrat(b) << endl;
	cout << "Різниця квадратів: " << kvadrat(a) - kvadrat(b) << endl;
	cout << "Добуток квадратів: " << kvadrat(a) * kvadrat(b) << endl;
	cout << "Частка квадратів: " << kvadrat(a) / kvadrat(b) << "\n\n\n";


	// задача Begin8
	// умова задачі
	cout << "Задача Begin8" << endl;
	cout << "Дано два числа a і b." << endl;
	cout << "Знайти їх середнє арифметичне: (a + b) / 2." << "\n\n";

	// введення змінних
	cout << "Ведіть перше значеня: ";
	cin >> a;
	cout << "Ведіть друге значеня: ";
	cin >> b;
	cout << endl;

	//Основний код
	cout << "Cереднє арифметичне: " << (a + b) / 2 << "\n\n\n";


	// задача Begin34
	// умова задачі
	cout << "Задача Begin34" << endl;
	cout << "Дано три числа." << endl;
	cout << "Знайти їх середнє арифметичне: (a + b + c)/3." << "\n\n";

	// введення змінних
	cout << "Ведіть перше значеня: ";
	cin >> a;
	cout << "Ведіть друге значеня: ";
	cin >> b;
	cout << "Ведіть третіє значеня: ";
	cin >> c;
	cout << endl;

	//Основний код
	cout << "Cереднє арифметичне: " << (a + b + c) / 3 << "\n\n\n";

	return 0;
}
