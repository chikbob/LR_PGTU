#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <math.h>



using namespace std;

void task1()
{
    double metersCount;
    int kilometer, meter;
    cout << "Введите количество метров: ";
    cin >> metersCount;
    meter = static_cast<int>(metersCount) % 1000;
    if (metersCount >= 1000)
    {
        kilometer = metersCount / 1000;
        if (kilometer % 100 == 11 || kilometer % 100 == 12 || kilometer % 100 == 13 || kilometer % 100 == 14)
        {
            cout << kilometer << " километров " << meter << " метров " << endl;
        }
        else
        if (kilometer % 10 == 1)
        {
            cout << kilometer << " километр " << meter << " метров " << endl;
        }
        else
            if (kilometer % 10 == 2 || kilometer % 10 == 3 || kilometer % 10 == 4)
            {
                cout << kilometer << " километрa " << meter << " метров " << endl;
            }
            else
                cout << kilometer << " километров " << meter << " метров " << endl;
    }
    else
    {
        kilometer = 0;
        cout << kilometer << " километров " << meter << " метров " << endl;
    }
}

void task2()
{
    double course, moneyCount;
    cout << "Введите курс рубля к доллару: ";
    cin >> course;
    cout << "Введите количество долларов: ";
    cin >> moneyCount;
    double final = course * moneyCount;
    cout << "Количество полученых рублей: " << final << endl;
}

void task3()
{
    double radius;
    cout << "Введите радиус круга: ";
    cin >> radius;
    cout << M_PI * pow(radius, 2) << endl;
    
}

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Задание 1: Создайте программу, которая переводит метры в километры. Например, пользователь вводит 2345 метров, а программа в ответ отображает 2 километра и 345 метров." << endl;
    task1();
    cout << "Задание 2: Напишите программу обмена валют: программа запрашивает текущий курс доллара, например, к рублю, и количество единиц (рублей) для конвертации и выводит в консоль сконвертированную сумму в долларах." << endl;
    task2();
    cout << "Задание 3: Напишите программу, которая запрашивает у пользователя радиус круга и, используя полученный радиус, вычисляет площадь круга." << endl;
    task3();
}
