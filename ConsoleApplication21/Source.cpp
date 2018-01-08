#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int z;
	do
	{
		cout << "Какое задание?";
		cin >> z;
		switch (z)
		{
		case 1:
		{
			/*1.	Заполнить массив из восьми элементов следующими значениями :
			первый элемент массива равен 37, второй — 0, третий — 50, четвертый — 46, пятый — 34, шестой — 46, седьмой — 0, восьмой —13.*/
			int a[8] = { 37,0,50,46,34,46,0,13 };
			for (int i = 0; i < 8; i++)
			{
				cout << a[i] << endl;
			}
		}
		break;

		case 2:
		{
			//2.	Заполнить массив из десяти элементов значениями, вводимыми с клавиатуры в ходе выполнения программы
			int a[10] = { 0 };
			cout << "Введите значение?" << endl;

			for (int i = 0; i < 10; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << endl;
			}
		}
		break;

		case 3:
		{
			/*3.	Массив предназначен для хранения значений ростов двенадцати человек.
				С помощью датчика случайных чисел заполнить массив целыми значениями, 
				лежащими в диапазоне от 163 до 190 включительно*/
			int rost[12];
			srand(time(NULL));
			for (int i = 0; i < 12; i++)
			{
				rost[i] = 163 + rand() % 27;
			}
			for (int i = 0; i < 12; i++)
			{
				cout << rost[i] << endl;
			}
		}
		break;

		case 4:
		{
			//4.	Составить программу вывода на экран любого элемента массива по его индексу
			int arr[20] = { 0 },b;
			srand(time(0));
			for (int i = 0; i < 20; i++)
			{
				arr[i] = 25 + rand() % 100;
			}
			cout << "?????????????????" << endl;
			cin >> b;
			cout << arr[b] << endl;
		}
		break;

		case 5:
		{
			//5.	Вывести элементы массива на экран в обратном порядке
			int arr[12];
			for (int i = 0; i <= 11; i++)
			{
				arr[i] = 3 + rand() % 23;
			}
			for (int i =11; i >=0; i--)
			{
				cout << arr[i] << endl;
			}
		}
		break;

		case 6:
		{
			/*6.	Дан массив.Составить программу :
			a.расчета квадратного корня из любого элемента массива;
			b.расчета среднего арифметического двух любых элементов массива*/
			int arr[12], b, c, d, sr;
			for (int i = 0; i <= 11; i++)
			{
				arr[i] = 3 + rand() % 23;
			}
			cout << "Kakoe chislo ?" << endl;
			cin >> b;
			cout << pow(arr[b], 2) << endl;
			cout << "Vyberite ewe odno chislo?" << endl;
			cin >> c;
			d = arr[c];
			cout << (arr[b] + arr[c])/2 << endl;
			
		}
		break;

		}

	} while (z <= 0);
	system("pause");

}
