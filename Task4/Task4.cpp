#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void BestItem(string& item)
{

    ofstream fout("Item.txt");
    fout << item << endl;
    fout.close();

}

void BackgroundСolor(const string& color)
{
    if (color == "red")
    {
        system("color 47");
    }
    else if (color == "blue")
    {
        system("color 37");
    }
    else if (color == "green")
    {
        system("color 27");
    }
    else if (color == "yellow")
    {
        system("color 67");
    }
    else if (color == "white")
    {
        system("color 77");
    }
    else
    {
        system("color 0F"); // по умолчанию
    }
    ofstream fout("Item.txt", ios::app);
    fout << color << endl;
    fout.close();
}

int main()
{
    setlocale(0, "");
    string item, color;

    ifstream fin("Item.txt"); // создание файла

    if (fin.is_open())
    {
        getline(fin, item);
        getline(fin, color);
        fin.close();
        BackgroundСolor(color);

        cout << "Текущие данные: " << endl;
        cout << "Ваш школьный предмет : " << item << endl;
        cout << "Ваш цвет: " << color << endl;

        char choice;
        cout << "\nХотите изменить данные? (y/n): ";
        cin >> choice;
        cin.ignore();

        if (choice == 'y' || choice == 'Y')
        {

            cout << "\nВведите новый школьный предмет: ";
            getline(cin, item);
            cout << "\nВведите цвет (red, blue, green, yellow, white): ";
            getline(cin, color);

            ofstream fout("Item.txt");
            if (fout.is_open())
            {
                fout << item << endl << color << endl;
                fout.close();
                cout << "Данные обновлены!" << endl;
            }
        }
    }
    else
    {
        cout << "Файл не найден, введите цвет и школьный предмет: \n";
        cout << "\nВведите новый школьный предмет: ";
        getline(cin, item);
        cout << "\nВведите цвет (red, blue, green, yellow, white): ";
        getline(cin, color);
    }
    BackgroundСolor(color);

    return 0;
}