#include"WorkToArrays.h"
#include<ctime>
#include <stdio.h>
#include <time.h>



void main()
{
	setlocale(0, "");

				//10

	unsigned Length;
	cout << "����� �������������� ������� - ";
	cin >> Length;
	unsigned int start1 = clock();
	int* Array_10 = new int[Length];
	for (unsigned i = 0; i < Length; i++)
	{
		Array_10[i] = -1000 + rand() % 1000;
		//cout << "Array_10[" << i << "] = " << Array_10[i] << endl;
	}


	unsigned int start = clock();
	cout << "����������� ������� - " << MinElement(Array_10, Length) << endl;
	unsigned int end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << endl << endl << endl;

	start = clock();
	cout << "����� ������� ��������� ����� 0 = " << SumElAfterZero(Array_10, Length) << endl;
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << endl << endl << endl;

	cout << "� ������ �������� ����� � ������ ��������, �� ������ � ��������" << endl;
	start = clock();
	FirstHalfIsEven_SecondIsNotEven(Array_10, Length);
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << endl << endl << endl;
	unsigned int end1 = clock();
	cout << (double)(end1 - start1) / CLOCKS_PER_SEC << 'c' << endl << endl << endl;

	//for (unsigned i = 0; i < Length; i++)
	//{
	//	cout << "Array_10[" << i << "] = " << Array_10[i] << endl;
	//}



				//11
	cout << endl;
	float Array_11[10] = {2.4, 2.7, 8.908, 21.4, 5.6, 3.5, 1.89, -6.4, 7.0, 4.6};
	for (unsigned i = 0; i < 10; i++)
	{
		cout << "Array_11[" << i << "] = " << Array_11[i] << endl;
	}
	cout << "����� ������������ �� ������ �������� - " << NumberMinElement(Array_11, 10) << endl;
	cout << "����� ������� ����� ����� ������� �������������� ����� - " << SumAbsNumberAfterNeg(Array_11, 10) << endl;
	cout << "������� �� ������� ����� � ��������� �� � �� b, �������� � ����� ����" << endl;
	SqueezeArray(Array_11, 10, 1, 5);
	for (unsigned i = 0; i < 10; i++)
	{
		cout << "Array_11[" << i << "] = " << Array_11[i] << endl;
	}


	delete(Array_10);
	system("pause");
}