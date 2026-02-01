#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	std::ifstream ifile{ "in.txt" };
	
	if (!ifile)
	{
		cout << "Ошибка открытия файла\n";
		return 1;
	}

	int a;
	ifile >> a;

	int* arr = new int[a];

	for (int i = 0; i < a; i++)
	{
		ifile >> arr[i];
	}

	for (int i = a - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	ifile.close();

	delete[] arr;

	return 0;
}