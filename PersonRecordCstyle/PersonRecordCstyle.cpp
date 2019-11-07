// PersonRecordCstyle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	//std::cout << "Hello World!\n";

	char name[100];
	int age = 0;
	char gender = ' ';
	char address[100];
	bool married;
	float height;
	int ret;

	printf("Name:");
	ret = scanf("%s",name);

	printf("Age:");
	ret = scanf("%i", &age);

	printf("Gender:");
	ret = scanf(" %c", &gender);

	printf("Address:");
	ret = scanf("%s", &address);

	printf("Married:");
	ret = scanf(" %c", &married);

	printf("Height:");
	ret = scanf(" %f", &height);

	printf("\n");
	printf("Name: %s\n", name);
	printf("Age: %i\n", age);
	printf("Gender: %c\n", gender);
	printf("Address: %s\n", address);
	printf("Married: %i\n", married);
	printf("Height: %.2f\n", height);
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
