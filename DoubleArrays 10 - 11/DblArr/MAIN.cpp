#include"Multidim.h"
#include<ctime>
#include <stdio.h>

void main()
{
	setlocale(0, "");

	unsigned Col = 4;
	unsigned Row = 4;

	float **Array = MakeArr(Row, Col);

	unsigned start = clock();
	InicRand(Array, Row, Col);
	unsigned end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << "c" << endl;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
			cout << Array[i][j] << "\t";

		cout << endl << endl;
	}

	cout << endl << endl;
	cout << endl << endl;

	start = clock();

	for (int i = 0; i < Row; i++)
		for (int j = 0; j < Col; j++)
			if (LocalMin(Array, Row, Col, i, j))
				cout << "��������� ������� - " << Array[i][j] << endl;

	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << "c" << endl;


	cout << endl << endl;
	cout << endl << endl;

	start = clock();
	cout << "����� ��������� ���� ������� ��������� = " << SumElHigMainDiag(Array, Row, Col) << endl;
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << "c" << endl;


	cout << endl << endl;
	cout << endl << endl;

	start = clock();
	cout << "���-�� ����� ������� �����., ������� ������ N = " << NumLineAvSmlrN(Array, Row, Col, 5) << endl;
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << "c" << endl;


	cout << endl << endl;
	cout << endl << endl;

	cout << "�������� ������� � ������������ ����" << endl;

	start = clock();
	TriangleView(Array, Row, Col);
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << "c" << endl;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			cout.setf(ios::left);
			cout.width(15);
			cout << Array[i][j];
		}

		cout << endl << endl;
	}

	system("pause");
}