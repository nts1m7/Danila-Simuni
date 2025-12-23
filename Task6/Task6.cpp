#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class RangeWorker {
    int min;
    int max;
    vector<int> numbers;

public:
    void setRange(int mn, int mx) {
        min = mn;
        max = mx;
        numbers.clear();
    }

    void generateNumbers(int count) {
        srand(time(0));
        for (int i = 0; i < count; i++) {
            int num = min + rand() % (max - min + 1);
            numbers.push_back(num);
        }
    }

    bool isInRange(int num) {
        return (num >= min && num <= max);
    }

    int getRangeLength() {
        return max - min + 1;
    }

    void showNumbers() {
        for (int n : numbers) cout << n << " ";
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    RangeWorker rw;

    rw.setRange(10, 50);
    rw.generateNumbers(8);

    cout << "—генерированные числа: ";
    rw.showNumbers();
    cout << endl;

    cout << "ƒлина диапазона: " << rw.getRangeLength() << endl;
    cout << "25 в диапазоне? " << (rw.isInRange(25) ? "да" : "нет") << endl;
    cout << "5 в диапазоне? " << (rw.isInRange(5) ? "да" : "нет") << endl;
    cout << "50 в диапазоне? " << (rw.isInRange(50) ? "да" : "нет") << endl;

    cin.get();
    return 0;
}