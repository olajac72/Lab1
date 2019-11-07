// HelloWorlds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	int times, i;

    cout << "Hello World!\n";

	cout << "Number of times : ";

	cin >> times;

	for (i = 0; i < times; i++)
	{
		cout << i + 1 << " " << "Hello world for loop" << endl;
	}
	cout << endl;
	i = 0;
	while (i < times)
	{
		cout << i + 1 << " " << "Hello world while" << endl;

		i++;
	}
	cout << endl;
	i = 0;
	do {
		cout << i + 1 << " " << "Hello world do while" << endl;

		i++;
	} while (i < times);
}
