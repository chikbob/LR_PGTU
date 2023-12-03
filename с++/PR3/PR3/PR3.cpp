#include <iostream>

void task1()
{
    int num;
    int arr[10] = {};

    const int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        std::cout << "Введите " << i + 1 << "-й элемент массива: ";
        std::cin >> num;

        arr[i] += num;

    }

    std::cout << "\narr = [";

    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            std::cout << arr[i];

        }
        else
        {
            std::cout << " " << arr[i];
        }
    }

    std::cout << "]\n" << std::endl;

    std::cout << "Перевернутый arr = [";

    for (int i = 9; i >= 0; i--)
    {
        if (i == 9)
        {
            std::cout << arr[i];

        }
        else
        {
            std::cout << " " << arr[i];
        }
    }

    std::cout << "]\n";
}

void task2()
{
    int num;
    int arr[10] = {};
    const int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        num = 2 * i + 6;
        arr[i] += num;
    }

    std::cout << "\narr = [";

    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            std::cout << arr[i];

        }
        else
        {
            std::cout << " " << arr[i];
        }
    }

    std::cout << "]" << std::endl;
}

void task3()
{
    int arr[100];

    std::cout << "\narr = [";

    int obj = 0;
    for (int i = 0; i < 100; i++)
    {
        if(i % 2 != 0)
        {
            arr[obj] = i;
            if (i != 0)
            {
                std::cout << " " << arr[obj];
            }
            else
            {
                std::cout << arr[obj];
            }
            obj++;
        }
    }

    std::cout << "]" << std::endl;
}

void main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Задание 1: Напишите программу, в которой определен одномерный массив чисел int. Пользователь должен вводить с консоли значения для всех элементов массива. После завершения ввода всех чисел программа должна вывести элементы массива в обратном порядке." << std::endl;
    task1();
    std::cout << "\nЗадание 2: Напишите программу, заполняющую массив из 10 элементов числами, которые вычисляются выражением bi=2i+6 Элементы массива выводятся на экран." << std::endl;
    task2();
    std::cout << "\nЗадание 4: Заполнить массив нечётными числами от 1 до 99." << std::endl;
    task3();
}