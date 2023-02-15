#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}
}