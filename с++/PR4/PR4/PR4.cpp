#include <iostream>
using namespace std;

void task1(int* a, int* b) {
    *a += 2;
    int temp = *a; 
    *a = *b;
    *b = temp;
}

int task2(const int* arr, int size) {
    int count = 0;
    const int* lastElement = arr + size - 1;
    for (const int* ptr = arr; ptr < lastElement; ptr++) {
        if (*ptr != *lastElement) {
            count++;
        }
    }
    return count;
}

void task3()
{
    int arr[20];
    int* ptr = arr;

    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }

    cout << "\nЭлементы массива в прямом порядке:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << *ptr << " ";
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
        ptr++;
    }

    cout << "\nЭлементы массива в обратном порядке:" << endl;
    for (int i = 0; i < 20; i++) {
        ptr--;
        cout << *ptr << " ";
        if (i > 0 && i % 5 == 4) {
            cout << endl;
        }
    }
}

void main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Задание 1: Напишите программу, которая после ввода двух целочисленных a и b с помощью указателей увеличивает значение a на 2 и затем меняет значения переменных a и b через указатели.";
    cout << "\nВведите два целочисленных значения a и b: ";
    cin >> a >> b;
    task1(&a, &b);
    cout << "Измененные значения: a = " << a << ", b = " << b << endl;

    cout << "\nЗадание 3: Дан одномерный массив. Определить сколько среди элементов массива отличных от последнего элемента. Использовать указатели.";

    int arr[] = { 1, 2, 3, 8, 4, 5, 6, 6, 7, 8, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = task2(arr, size);
    cout << "\nКоличество элементов отличных от последнего: " << result << endl;

    cout << "\nЗадание 4: Напишите программу, которая определяет и инициализирует массив 20 числами. Выведите числа из массива на консоль по пять в строку. Для вывода определите указатель, который указывает на массив. С помощью инкремента (++) указателя выведите элементы в прямом порядке. А с потом в отдельном цикле с помощью декремента указателя выведите элементы массива в обратном порядке.";
    task3();
}