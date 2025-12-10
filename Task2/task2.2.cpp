#include <iostream>
#include <stdexcept>

using namespace std;

int safe_divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Ошибка: деление на ноль!");
    }
    return a / b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        int x = 10;
        int y = 0;
        cout << "Результат: " << safe_divide(x, y) << "\n";
    }
    catch (const exception& ex) {
        cout << "Перехвачено исключение: " << ex.what() << "\n";
    }
    return 0;
}