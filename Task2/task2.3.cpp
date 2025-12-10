#include <iostream>
#include <vector>
#include <ctime>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int SIZE = 45000000;
    vector<int> numbers;

    cout << "Начинаем интенсивные вычисления...\n";

    clock_t start = clock();

    for (int i = 0; i < SIZE; i++) {
        numbers.push_back(i * 2);
    }

    long long sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
        numbers[i] = numbers[i] * 3 / 2;
    }

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) {
            sum -= numbers[i];
        }
        else {
            sum += numbers[i] * 2;
        }
    }

    clock_t end = clock();
    double duration = double(end - start) / CLOCKS_PER_SEC;

    cout << "Вычисления завершены!\n";
    cout << "Итоговая сумма: " << sum << "\n";
    cout << "Время выполнения: " << duration << " секунд\n";
    cout << "Обработано элементов: " << SIZE << "\n";

    return 0;
}