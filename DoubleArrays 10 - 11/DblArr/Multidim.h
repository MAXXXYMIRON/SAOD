#pragma once
#include<iostream>

using namespace std;

//Создать матрицу размером Row на Col
float** MakeArr(const unsigned &Row, const  unsigned &Col);

//Инициализировать матрицу рандомными значениями
void InicRand(float** &Arr, const unsigned &Row, const  unsigned &Col);

//Инициализировать матрицу конкретыми эл.
void Inic(float** &Arr, const unsigned &Row, const  unsigned &Col);

//Выяснить ялвл. ли эл. лок. минимумом
bool LocalMin(float** &Arr, const unsigned &Row, const  unsigned &Col, 
	const unsigned &IndR, const  unsigned &IndC);

//Сумма эл. выше глав. диагонали
float SumElHigMainDiag(float** &Arr, const unsigned &Row, const  unsigned &Col);

//Привести матрицу к треугольному виду
void TriangleView(float** &Arr, const unsigned &Row, const  unsigned &Col);

//Кол-во строк среднее арифм., которых меньше N
unsigned NumLineAvSmlrN(float** &Arr, const unsigned &Row, const  unsigned &Col, const float &N);

//Удалить матрицу
void Delete(float** &Arr, const unsigned &Row, const  unsigned &Col);


