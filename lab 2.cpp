/*Задаються три пари чисел, які задають трикутник на площині. Крім
того,задається ще одна пара чисел, яка задає точку на площині. Визначити, чи
лежить точка усередині трикутника, чи на одному з його ребер, чи зовні.*/

#include "pch.h"
#include <iostream>
#include <ctime>
#include<cmath>
using namespace std;
int A[2];
int B[2];
int C[2];
int D[2];





int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//создаем точки со случайными координатами
		//в 0 рядке хранятся Х, в 1 рядке хранятся У
		const int ROW = 2;//хранятся координаты
		const int COL = 4;
		int arr[COL][ROW];
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
				arr[i][j] = rand() % 11;//координатами будут случайные числа от 0 до 10
		}
		for (int i = 0; i <= 4; i++)
		{
			switch (i) {
			case 1: {cout << "(x1,y1)=" << "(" << arr[0][0] << "," << arr[1][0] << ")" << endl; break; }
			case 2: {cout << "(x2,y2)=" << "(" << arr[0][1] << "," << arr[1][1] << ")" << endl; break; }
			case 3: {cout << "(x3,y3)=" << "(" << arr[0][2] << "," << arr[1][2] << ")" << endl; break; }
			case 4: {cout << "(x4,y4)=" << "(" << arr[0][3] << "," << arr[1][3] << ")" << endl; break; }

			}

		}
		// ДОЛЖНА БЫТЬ ПРОВЕРКА 
	
	int x1, x2, x3, x4, y1, y2, y3, y4;
	x1 = arr[0][0];
	y1 = arr[1][0];
	x2 = arr[0][1];
	y2 = arr[1][1];
	x3 = arr[0][2];
	y3 = arr[1][2];
	x4 = arr[0][3];
	y4 = arr[1][3];
	cout << "A (x1,y1)" << endl;
	cout << "B (x2,y2)" << endl;
		cout << "C (x3,y3)" << endl;
		cout << "D (x4,y4)" << endl;
	


}

void proverka()// проверка того, сусчествует ли такой треухгольник
{
	//если три точки лежат на одной прямой- это не трехугольник
	//если три точки совпадают, либо две из них совпадают- трехугольника не сусчествует
	
}
void coord(int*px1, int *py1, int*px2, int *py2, int*px3, int *py3)
{
	if ((*px1 < *px2) && (*px2 < *px3))
	{
		int A [2]= {  *px1, *py1 };
		int B[2] = { *px2, *py2 };
		int C[2] = { *px3, *py3 };
	}
	else 
	{
		int min = *px1;
		if (*px1>*px2)
		{
			min = *px2;
			if (*px2 > *px3)
				min = *px3;
		}
		if else (*px1>)
			

		

	}
}
