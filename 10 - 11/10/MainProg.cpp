#include"Module.h"


void main()
{
	setlocale(0, "");

	float xB = 1, xE  = 10, xS = 0.1, a = 9.2, b = 3.1, c = 2.4;
	
	//Input("’нач", xB);
	//Input("’кон", xE);
	//Input("Ўаг", xS, abs(abs(xE) - abs(xB)), 0);
	//Input("a", a);
	//Input("b", b);
	//Input("c", c);

					// 10 - задание 
	if ((~((int)a | (int)b) & ((int)a ^ (int)c)) == 0)

		for (float i = xB; i <= xE; i += xS)
			Output(F_10(i, a, b, c), i, "F_10");
	else

		for (float i = xB; i <= xE; i += xS)
			Output((int)F_10(i, a, b, c), i, "F_10");


	cout << endl;
	cout << endl;

					// 11 - задание 
	if ((((int)a & (int)b) ^ (int)c) == 0)

		for (float i = xB; i <= xE; i += xS)
			Output(F_11(i, a, b, c), i, "F_11");
	else

		for (float i = xB; i <= xE; i += xS)
			Output((int)F_11(i, a, b, c), i, "F_11");
		
	
	system("pause");
}