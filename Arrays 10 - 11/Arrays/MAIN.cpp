#include"WorkToArrays.h"


void main()
{
	setlocale(0, "");

				//10
	unsigned Length;
	cout << "����� �������������� ������� - ";
	cin >> Length;
	int* Array_10 = new int[Length];
	for (unsigned i = 0; i < Length; i++)
	{
		cout << "Array_10[" << i << "] = ";
		cin >> Array_10[i];
	}

	cout << "����������� ������� - " << MinElement(Array_10, Length) << endl;
	cout << "����� ������� ��������� ����� 0 = " << SumElAfterZero(Array_10, Length) << endl;

	cout << "� ������ �������� ����� � ������ ��������, �� ������ � ��������" << endl;
	FirstHalfIsEven_SecondIsNotEven(Array_10, Length);
	for (unsigned i = 0; i < Length; i++)
	{
		cout << "Array_10[" << i << "] = " << Array_10[i] << endl;
	}



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