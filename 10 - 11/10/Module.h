#pragma once
#include<iostream>
#include<string>

using namespace std;

//Ввод числа с указанием его названия
void Input(const string &nameVar, float &var);

//Ввод числа с указанием его названия
//И проверкой на вхождения в определленыный диапазон
void Input(const string &nameVar, float &var, const float &first, const float &second);

//Вывод результата в виде таблицы
void Output(const float &argF, const float &step, const string nameF);


float F_10(const float &x, const float &a, const float &b, const float &c);

float F_11(const float &x, const float &a, const float &b, const float &c);

