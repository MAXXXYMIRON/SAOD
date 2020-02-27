#include"Multidim.h"

//������� ������� �������� Row �� Col
float** MakeArr(const unsigned &Row, const  unsigned &Col)
{
	float **Arr;
	Arr = new float*[Row];
	for (unsigned i = 0; i < Row; i++)
		Arr[i] = new float[Col];
	
	return Arr;
}


//���������������� ������� ���������� ����������
void InicRand(float** &Arr, const unsigned &Row, const  unsigned &Col)
{
	for (unsigned i = 0; i < Row; i++)
	{
		for (unsigned j = 0; j < Col; j++)
		{
			Arr[i][j] = (rand() % 1000 - 1) / 100;
		}
	}
}

//���������������� ������� ���������� ��.
void Inic(float** &Arr, const unsigned &Row, const  unsigned &Col)
{
	for (unsigned i = 0; i < Row; i++)
	{
		for (unsigned j = 0; j < Col; j++)
		{
			cout << "Arr[" << i << "][" << j << "] = \t";
			cin >> Arr[i][j];
		}
	}
}


//������� �������
void Delete(float** &Arr, const unsigned &Row, const  unsigned &Col)
{
	for (unsigned i = 0; i < Row; i++)
	{
		delete(Arr[i]);
	}
	delete(Arr);
}




//�������� ����. �� ��. ���. ���������
bool LocalMin(float** &Arr, const unsigned &Row, const  unsigned &Col,
	const unsigned &IndR, const  unsigned &IndC)
{
	if (IndR >= Row || IndR < 0 || IndC >= Col || IndC < 0) return false;

	if (IndR == 0 && 0 == IndC)
		return (Arr[IndR][IndC] < Arr[IndR][IndC + 1] && Arr[IndR][IndC] < Arr[IndR + 1][IndC]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC + 1]);

	else if (IndR == Row - 1 && Col - 1 == IndC)
		return (Arr[IndR][IndC] < Arr[IndR][IndC - 1] && Arr[IndR][IndC] < Arr[IndR - 1][IndC]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC - 1]);

	else if (IndR == 0 && IndC == Col - 1)
		return (Arr[IndR][IndC] < Arr[IndR + 1][IndC] && Arr[IndR][IndC] < Arr[IndR][IndC - 1]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC - 1]);

	else if (IndR == Row - 1 && IndC == 0)
		return (Arr[IndR][IndC] < Arr[IndR - 1][IndC] && Arr[IndR][IndC] < Arr[IndR][IndC + 1]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC + 1]);

	else if (IndR == 0)
		return(Arr[IndR][IndC] < Arr[IndR + 1][IndC] && Arr[IndR][IndC] < Arr[IndR][IndC + 1]
			&& Arr[IndR][IndC] < Arr[IndR][IndC - 1] && Arr[IndR][IndC] < Arr[IndR + 1][IndC - 1]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC + 1]);

	else if (IndR == Row - 1)
		return(Arr[IndR][IndC] < Arr[IndR - 1][IndC] && Arr[IndR][IndC] < Arr[IndR][IndC + 1]
			&& Arr[IndR][IndC] < Arr[IndR][IndC - 1] && Arr[IndR][IndC] < Arr[IndR - 1][IndC - 1]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC + 1]);

	else if (IndC == 0) 
		return(Arr[IndR][IndC] < Arr[IndR][IndC + 1] && Arr[IndR][IndC] < Arr[IndR - 1][IndC]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC] && Arr[IndR][IndC] < Arr[IndR - 1][IndC + 1]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC + 1]);

	else if (IndC == Col - 1)
		return(Arr[IndR][IndC] < Arr[IndR][IndC - 1] && Arr[IndR][IndC] < Arr[IndR - 1][IndC]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC] && Arr[IndR][IndC] < Arr[IndR + 1][IndC - 1]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC - 1]);

	else
		return(Arr[IndR][IndC] < Arr[IndR][IndC - 1] && Arr[IndR][IndC] < Arr[IndR][IndC + 1]
			&& Arr[IndR][IndC] < Arr[IndR + 1][IndC] && Arr[IndR][IndC] < Arr[IndR - 1][IndC]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC - 1] && Arr[IndR][IndC] < Arr[IndR + 1][IndC - 1]
			&& Arr[IndR][IndC] < Arr[IndR - 1][IndC + 1] && Arr[IndR][IndC] < Arr[IndR + 1][IndC + 1]);
}


//����� ��. ���� ����. ���������
float SumElHigMainDiag(float** &Arr, const unsigned &Row, const  unsigned &Col)
{
	float Sum = 0;
	if (Row < Col)
		for (unsigned i = 0; i < Row; i++)
			for (unsigned j = i; j < Col; j++)
				Sum += Arr[i][j];
	else
		for (unsigned i = 0; i < Col; i++)
			for (unsigned j = i; j < Col; j++)
				Sum += Arr[i][j];

	return Sum;	
}




//�������� ������� � ������������ ����
void TriangleView(float** &Arr, const unsigned &Row, const  unsigned &Col)
{
	unsigned index = 0,
		pred = (Col > Row) ? Row - 1 : Col - 1;

	for (unsigned j = 0; j < pred; j++)
		for (unsigned i = 0; i < pred - j; i++)
		{
			if (Arr[i][j] == 0) continue;
			index = i + 1;
			while (Arr[index][j] == 0)
			{
				index++;
				if (index == pred) break;
			}

			for (unsigned k = 0; k < Col; k++)
				Arr[i][k] = (Arr[i][k] * Arr[index][j]) - (Arr[index][k] * Arr[i][j]);
		}
}


//���-�� ����� ������� �����., ������� ������ N
unsigned NumLineAvSmlrN(float** &Arr, const unsigned &Row, const  unsigned &Col, const float &N)
{
	unsigned number = 0;
	float sum = 0;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
			sum += Arr[i][j];

		if (sum / Col < N) number++;
		sum = 0;
	}

	return number;
}