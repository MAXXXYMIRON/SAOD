#include"Module.h"

//Ввод числа с указанием его названия
void Input(const string &nameVar, float &var)
{
	cout << nameVar << " = ";
	cin >> var;
}
//Ввод числа с указанием его названия
//И проверкой на вхождения в определленыный диапазон
void Input(const string &nameVar, float &var, const float &first, const float &second)
{
	do
	{
		cout << nameVar << " = ";
		cin >> var;
		if (var > first || var <= second) cout << "Неправильно" << endl;
	} while (var > first || var <= second);
}


float F_10(const float &x, const float &a, const float &b, const float &c)
{
	if (x < 3 && b != 0) return a * x * x - b * x + c;
	if (x > 3 && b == 0) return (x - a) / (x - c);
	return x / c;
}


float F_11(const float &x, const float &a, const float &b, const float &c)
{
	if (x < 1 && c != 0) return (x * x * a) + (b / c);
	if (x > 15 & c == 0) return (x - a) / ((x - c) * (x - c));
	return (x * x) / (c * c);
}


//Вывод результата в виде таблицы
void Output(const float &argF, const float &step, const string nameF)
{
	cout.precision(6);
	cout.setf(ios::left);
	cout.width(15);
	cout << "|" + nameF + "(" + to_string(step) + ")";
	cout.width(10);
	cout << " = ";
	cout.width(10);
	cout << argF << " |" << endl;
	cout << "-------------------------------------" << endl;
}