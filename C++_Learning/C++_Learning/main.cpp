#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	int* pa = new int;
	*pa = 10;

	cout << *pa << endl;
	delete pa;
}