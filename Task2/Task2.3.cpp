#include <iostream>
using namespace std;

void Print(int x)
{
    cout << x << endl;
}

int main()
{
    for (int i = 0; i <= 10000000; i++)
    {
        Print(i);
    }
    return 0;
}