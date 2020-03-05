#include"Header.h"


void WriteFile(string nameFile, string data)
{
	ofstream file;
	file.open(nameFile);

	if (file.is_open())
	{
		file << data;
	}
}


