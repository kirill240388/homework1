#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	Напишите программу, которая вычисляет сумму целых чисел от а до 500 (значение a вводится с клавиатуры).*/
		int a,sum;
		sum = 0;
		cin >> a;
		for (int i = a;i <= 500;i++)
		{
			sum += i;
			//cout << i << endl;
			//cout << sum << endl;
		}
		cout << "Summa vseh chisel ot " << a << " do 500 ravna " << sum << endl;
	}
	if (task == 2)
	{
		/*2.	Напишите программу, которая запрашивает два целых числа x и y, после чего вычисляет и выводит значение x
		в степени y.*/
		int x, y, pow;
		pow = 1;
		cin >> x;
		cin >> y;
		for (int i = 1;i <= y;i++)
		{
			pow *= x;
			//cout << pow << endl;
		}
		cout << pow << endl;
	}
	if (task == 3)
	{
		/*3.	Найти среднее арифметическое всех целых чисел от 1 до 1000.*/
		int sum, mid;
		sum = 0;
		for (int i = 1;i <= 1000;i++)
		{
			sum += i;
		}
		mid = sum / 1000;
		cout << mid << endl;
	}
	if (task == 4)
	{
		/*4.	Найти произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры : 1  a  20).*/
		long long int proizv,a;
		cin >> a;
		proizv = 1;
		for (long long int i = a;i <= 20;i++)
		{
			proizv *= i;
			//cout << i << endl;
			//cout << proizv << endl;
		}
		cout << proizv << endl;
		
	}
	if (task == 5)
	{
		/*5.	Написать программу, которая выводит на экран таблицу умножения на k, где k – номер варианта.
		Например, для 7 - го варианта :
		7 x 2 = 14
		7 x 3 = 21*/
		int k, tab;
		cin >> k;
		for (int i = k;i == k;i++)
		{
			for (int j = 1;j < 10;j++)
			{
				tab = i*j;
				cout <<i<<" x "<<j<<" = "<< tab << endl;
			}
		}

	}

}