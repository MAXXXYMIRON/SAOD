#include"WorkToArrays.h"

//Минимальный элемент
float MinElement(int* &Arr, unsigned len)
{
	int min = abs(Arr[0]);
	for (unsigned i = 1; i < len; i++)
	{
		if (abs(Arr[i]) < min) min = Arr[i];
	}
	return min;
}

//Сумма элементов после 0
float SumElAfterZero(int* &Arr, unsigned len)
{
	unsigned sum = 0;
	for (unsigned i = 0; i < len; i++)
		if (Arr[i] == 0)
		{
			for (unsigned j = i; j < len; j++)
				sum += abs(Arr[j]);
			break;
		}
	return sum;
}

//В первой половине числа с четным индексом, во второй с нечетным
void FirstHalfIsEven_SecondIsNotEven(int* &Arr, unsigned len)
{
	int* Arr2 = new int[len];

	for (unsigned i = 0; i <= (len - 1) / 2; i++)
		Arr2[i] = Arr[i * 2];

	for (unsigned i = ((len - 1) / 2) + 1; i < len; i++)
		Arr2[i] = Arr[(i - (((len - 1) / 2) + 1)) * 2 + 1];

	delete(Arr);
	Arr = Arr2;
}

//Номер минимального элемента
unsigned NumberMinElement(float* Arr, unsigned len)
{
	unsigned index = 0;
	float min = Arr[0];
	for (unsigned i = 1; i < len; i++)
	{
		if (abs(Arr[i]) < min)
		{
			min = Arr[i];
			index = i;
		}
	}
	return index;
}

//Сумма модулей чисел после первого отрицательного числа
float SumAbsNumberAfterNeg(float* Arr, unsigned len)
{
	float sum = 0;
	for (unsigned i = 0; i < len; i++)
		if (Arr[i] < 0)
		{
			for (unsigned j = i; j < len; j++)
				sum += abs(Arr[j]);
			break;
		}
	return sum;
}

//Удалить из массива числа в диапазоне от а до b, записать в конец нули
void SqueezeArray(float* Arr, unsigned len, const float &a, const float &b)
{
	float* Arr2 = new float[len];	
	unsigned k = 0;
	for (unsigned i = 0; i < len; i++)
	{
		Arr2[i] = 0;
		if (!(Arr[i] >= a && Arr[i] <= b))
		{
			Arr2[k] = Arr[i];
			k++;
		}
	}
	for (unsigned i = 0; i < len; i++)
	{
		Arr[i] = Arr2[i];
	}
}