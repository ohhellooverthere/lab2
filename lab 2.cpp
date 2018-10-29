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
//создаем точки со случайными координатами
		//в 0 рядке хранятся Х, в 1 рядке хранятся У
	const int ROW = 2;//хранятся координаты
	const int COL = 4;
void coord(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3);
void setcoord();
void proverka(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3);






int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	
	int arr[COL][ROW];
	void setcoord(int arr[COL][ROW]);
	
	int &x1 = arr[0][0];
	int &y1 = arr[1][0];
	int &x2 = arr[0][1];
	int &y2 = arr[1][1];
	int &x3 = arr[0][2];
	int &y3 = arr[1][2];
	int &x4 = arr[0][3];
	int &y4 = arr[1][3];

	void proverka(int x1, int x2, int x3, int y1, int y2, int y3);// // проверка того, сусчествует ли такой треухгольник
	
	void coord(&x1, &y1, &x2, &y2, &x3, &y3 );
	cout << "A (x1,y1)" << endl;
	cout << "B (x2,y2)" << endl;
	cout << "C (x3,y3)" << endl;
	cout << "D (x4,y4)" << endl;



}
void prisvoit()
{}
void proverka(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3 )// проверка того, сусчествует ли такой треухгольник
{
	if ((x1 == x2) && (x2 == x3))
	{
		void setcoord();
	}
	else if (((x1 == x2) && (y1 == y2)) || ((x2 == x3) && (y2 == y3)) || ((x1 == x2) && (y1 == y2)))
	{
		void setcoord();
	}
	//если три точки лежат на одной прямой- это не трехугольник
	//если три точки совпадают, либо две из них совпадают- трехугольника не сусчествует

}
void setcoord()
{
	int arr[COL][ROW];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			arr[i][j] = rand() % 11;//координатами будут случайные числа от 0 до 10
	}
}
void coord(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3)
{
	int min = x1;
	int mid = x2;
	int max = x3;
		
	if ((x1 < x2) && (x2 < x3))
	{
		int A[2] = { x1, y1 };
		int B[2] = { x2, y2 };
		int C[2] = { x3, y3 };
	}
		
	else
	{
		
		if (x1 >= x2)
		{
			min = x2;
			if (x2 > x3)
			{
				min = x3;
			}
		}
		else if (x2 > x3) 
		{
			max = x2;
			if (x1 > x2)
			{
				max = x1;
			}
		}
		else if (x1==x2)
		{
			if (y1 > y2)
		{
			min = y2;
			if (x2 > x3)
			{
				min = x3;
			}
		}
		
		}




	}
}
