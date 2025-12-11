#include <iostream>
using namespace std;
/// <summary>
/// вычисление скорости
/// </summary>
/// <param name="a"> расстояние </param>
/// <param name="b"> время </param>
/// <returns></returns>
double calculator(double a, double b)
{
	return (a / b);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Введите расстояние: ";
	cin >> a; // Расстояние
	cout << "Введите время: ";
	cin >> b; // Время
	double c = calculator(a, b);
	cout << "Скорость = " << c << "км/ч" << endl;

	return 0;
}