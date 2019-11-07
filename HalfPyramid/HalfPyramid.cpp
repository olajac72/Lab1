// HalfPyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
	char c = ' ';
	int count, ret, begin, end;

	printf("Enter a number or a character:");
	ret = scanf(" %c", &c);

	if (c >= '1' && c <= '9')
	{
		begin = '1';
	}
	else if (c >= 'A' && c <= 'Z')
	{
		begin = 'A';
	}
	end = c;

	count = 1;

	for (int i = begin; i <= end; i++)
	{
		for (int j = 1; j <= count; j++)
		{
			printf("%c ", i);
		}

		count++;
		printf("\n");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
