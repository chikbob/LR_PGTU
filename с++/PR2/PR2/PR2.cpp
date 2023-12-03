#include <iostream>
#include <Windows.h>
using namespace std;

void celebrate()
{
	int year;
	string name = "", anniversary = "";
	cout << "Введите как вас зовут: ";
	cin >> name;
	cout << "Введите ваш возраст: ";
	cin >> year;
	
	if (year % 10 == 0)
	{
		anniversary = "С юбилеем вас!";
	}
	if (year > 0)
	{
		cout << "С днем рождения " << name << "! Вам сегодня исполнилось " << year << " лет!\n" << anniversary;
	}
	else
	{
		if (year == 0)
		{
			cout << "Вы ввели 0 лет или букву! Попробуйте еще раз!\n\n";
			cin.clear();
			celebrate();
		}
		else
		{
			cout << "Вы ввели отрицательный возраст!\n\n";
			cin.clear();
			celebrate();
		}
	}
}

double calculate(double num, int degree)
{
	double final = pow(num, degree);
	return final;
}

string reverseWord(string word)
{
	reverse(word.begin(), word.end());
	return word;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	celebrate();
	double num;
	int degree;
	string word;

	cout << "\nВведите число: ";
	cin >> num;
	cout << "Введите степень: ";
	cin >> degree;
	double final = calculate(num, degree);
	cout << "Ответ: " << num << " ^ " << degree << " = " << final << "\n";
	cout << "\nВведите cлово: ";
	cin >> word;
	cout << "Перевернутое слово: " << reverseWord(word);
}