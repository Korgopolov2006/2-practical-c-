#include <iostream>
#include <Windows.h>

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Добро пожаловать в калькулятор!\n";
	bool check = true;

	system("cls");
	cout << "Выберите операцию:\n 1.Сложение \n 2.Вычитание \n 3.Частное \n 4.Произвденеи \n 5.Возведение в степень \n 6.Нахождения квадратного корня\n 7.Нахождение 1 процента от числа\n 8.Найти факториал числа\n 9.Выйти из программы.\n";
	do
	{
		int choice;
		cin >> choice;

		if (choice == 1) // 1.Сложение
		{
			cout << "Введите два числа , сумму которых хотите узнать \n";
			double a, b, back;
			cin >> a;
			cin >> b;
			cout << "Результат: " << a + b << "\n";
			system("pause");
			main();

		}
		else if (choice == 2) // 2.Вычитание
		{
			cout << "Введите два числа , разность которых хотите узнать \n";
			double a, b, back;
			cin >> a;
			cin >> b;
			cout << "Результат: " << a - b << "\n";
			system("pause");
			main();
		}
		else if (choice == 3) // 3.Частное
		{
			cout << "Введите два числа , частное которых хотите узнать \n";
			double a, b, back;
			cin >> a;
			cin >> b;
			cout << "Результат: " << a * b << "\n";
			system("pause");
			main();

		}
		else if (choice == 4) // 4.Произвденеи
		{
			cout << "Введите два числа , произвденеи которых хотите узнать \n";
			double a, b, back;
			cin >> a;
			cin >> b;
			cout << "Результат: " << a / b << "\n";
			system("pause");
			main();
		}
		else if (choice == 5) // Возведение в степень
		{
			cout << "Введите два числа - \n";
			double a, b, c, back;
			cin >> a;
			cin >> b;
			c = a;

			for (int i = 1; i < b; i++)
			{
				c *= a;
			}
			cout << "Результат: " << c << "\n";
			system("pause");
			main();
		}
		else if (choice == 6) // Нахождения квадратного корня
		{
			cout << "Введите число - ";
			double a, b = 1, back;
			cin >> a;

			if (a > 0)
			{
				while (pow(b, 2) < a)
				{
					b += 1;
				}

				int n = 1;

				while (n <= 10)
				{
					b = 0.5 * (b + a / b);
					n += 1;
				}

				cout << "Результат: " << round(b) << "\n";
			}
			else
			{
				cout << "Число должно быть больше нуля!";
			}
			system("pause");
			main();

		}
		else if (choice == 7) // Нахождение 1 процента от числа
		{
			cout << "Введите число - ";
			double a, back;
			cin >> a;
			cout << "Результат: " << a / 100 << "\n";
			system("pause");
			main();
		}
		else if (choice == 8) // 8.Найти факториал числа
		{
			cout << "Введите число - ";
			double a = 1, n, back;
			cin >> n;

			for (int i = 2; i <= n; i++)
			{
				a *= i;
			}

			cout << "Результат: " << a << "\n";
			system("pause");
			main();
		}

		else if (choice == 9) // выйти из программы
		{
			cout << "Всего хорошего \n";
			check = false;
		}

	} while (check);
}
