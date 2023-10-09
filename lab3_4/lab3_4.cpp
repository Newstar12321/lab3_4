#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите номер дня недели (от 1 до 7)" << endl;
    cin >> a;
    string b;
    switch (a)
    {
    case 1: b = "Понедельник"; break;
    case 2: b = "Вторник"; break;
    case 3: b = "Среда"; break;
    case 4: b = "Четверг"; break;
    case 5: b = "Пятница"; break;
    case 6: b = "Суббота"; break;
    case 7: b = "Воскресенье"; break;
    default: 
    {
        cerr << "Ошибка: Такого дня недели нет";
        return 1;
    }
    }
    cout << b;
}