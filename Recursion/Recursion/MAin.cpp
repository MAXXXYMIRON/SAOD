#include<iostream>
#include"Header.h"

using namespace std;

unsigned Length(string str)
{
	return (str != "") ? 1 + Length(str.substr(1)) : 0;
}

int main()
{
	setlocale(0, "");

	string str;
	cin >> str;

	cout << "Символов в строке - " << Length(str) << endl;

	WriteFile("file.txt", to_string(Length(str)));

	system("pause");
	return 0;
}