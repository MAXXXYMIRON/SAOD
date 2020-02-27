#pragma once
#include<iostream>

using namespace std;

//������� ������� �������� Row �� Col
float** MakeArr(const unsigned &Row, const  unsigned &Col);

//���������������� ������� ���������� ����������
void InicRand(float** &Arr, const unsigned &Row, const  unsigned &Col);

//���������������� ������� ���������� ��.
void Inic(float** &Arr, const unsigned &Row, const  unsigned &Col);

//�������� ����. �� ��. ���. ���������
bool LocalMin(float** &Arr, const unsigned &Row, const  unsigned &Col, 
	const unsigned &IndR, const  unsigned &IndC);

//����� ��. ���� ����. ���������
float SumElHigMainDiag(float** &Arr, const unsigned &Row, const  unsigned &Col);

//�������� ������� � ������������ ����
void TriangleView(float** &Arr, const unsigned &Row, const  unsigned &Col);

//���-�� ����� ������� �����., ������� ������ N
unsigned NumLineAvSmlrN(float** &Arr, const unsigned &Row, const  unsigned &Col, const float &N);

//������� �������
void Delete(float** &Arr, const unsigned &Row, const  unsigned &Col);


