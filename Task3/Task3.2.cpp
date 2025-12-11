#include <iostream>
using namespace std;
/// <summary>
/// вычисление скорости
/// </summary>
/// <param name="a"> расстояние </param>
/// <param name="b"> время </param>
/// <returns></returns>
double calculator(double distance, double time)
{
	return (distance / time);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double distance, time;
	cout << "Введите расстояние: ";
	cin >> distance; // Расстояние
	cout << "Введите время: ";
	cin >> time; // Время
	double speed = calculator(distance, time); //Формула скорости
	cout << "Скорость = " << speed << "км/ч" << endl;

	return 0;
}