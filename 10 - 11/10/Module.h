#pragma once
#include<iostream>
#include<string>

using namespace std;

//���� ����� � ��������� ��� ��������
void Input(const string &nameVar, float &var);

//���� ����� � ��������� ��� ��������
//� ��������� �� ��������� � �������������� ��������
void Input(const string &nameVar, float &var, const float &first, const float &second);

//����� ���������� � ���� �������
void Output(const float &argF, const float &step, const string nameF);


float F_10(const float &x, const float &a, const float &b, const float &c);

float F_11(const float &x, const float &a, const float &b, const float &c);

