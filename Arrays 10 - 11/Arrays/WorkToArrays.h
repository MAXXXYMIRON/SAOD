#pragma once
#include<iostream>
using namespace std;

//����������� �������
float MinElement(int* &Arr, unsigned len);

//����� ��������� ����� 0
float SumElAfterZero(int* &Arr, unsigned len);

//� ������ �������� ����� � ������ ��������, �� ������ � ��������
void FirstHalfIsEven_SecondIsNotEven(int* &Arr, unsigned len);

//����� ������������ ��������
unsigned NumberMinElement(float* Arr, unsigned len);

//����� ������� ����� ����� ������� �������������� �����
float SumAbsNumberAfterNeg(float* Arr, unsigned len);

//������� �� ������� ����� � ��������� �� � �� b, �������� � ����� ����
void SqueezeArray(float Arr[], unsigned len, const float &a, const float &b);
