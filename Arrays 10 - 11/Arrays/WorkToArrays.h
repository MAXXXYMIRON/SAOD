#pragma once
#include<iostream>
using namespace std;

//Минимальный элемент
float MinElement(int* &Arr, unsigned len);

//Сумма элементов после 0
float SumElAfterZero(int* &Arr, unsigned len);

//В первой половине числа с четным индексом, во второй с нечетным
void FirstHalfIsEven_SecondIsNotEven(int* &Arr, unsigned len);

//Номер минимального элемента
unsigned NumberMinElement(float* Arr, unsigned len);

//Сумма модулей чисел после первого отрицательного числа
float SumAbsNumberAfterNeg(float* Arr, unsigned len);

//Удалить из массива числа в диапазоне от а до b, записать в конец нули
void SqueezeArray(float Arr[], unsigned len, const float &a, const float &b);
