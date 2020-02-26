#include"Multidim.h"
#include<ctime>
#include <stdio.h>

void main()
{
	setlocale(0, "");

	unsigned Col = 10;
	unsigned Row = 10;

	float **Array = MakeArr(Row, Col);
	InicRand(Array, Row, Col);
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
			cout << Array[i][j] << "\t";

		cout << endl << endl;
	}

	cout << endl << endl;
	cout << endl << endl;

	for (int i = 0; i < Row; i++)
		for (int j = 0; j < Col; j++)
			if (LocalMin(Array, Row, Col, i, j))
				cout << "��������� ������� - " << Array[i][j] << endl;

	cout << endl << endl;
	cout << endl << endl;

	cout << "����� ��������� ���� ������� ��������� = " << SumElHigMainDiag(Array, Row, Col) << endl;


	cout << endl << endl;
	cout << endl << endl;

	cout << "���-�� ����� ������� �����., ������� ������ N = " << NumLineAvSmlrN(Array, Row, Col, 5) << endl;

	cout << endl << endl;
	cout << endl << endl;

	cout << "�������� ������� � ������������ ����" << endl;
	TriangleView(Array, Row, Col);
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
			cout << Array[i][j] << "\t";

		cout << endl << endl;
	}

	system("pause");
}