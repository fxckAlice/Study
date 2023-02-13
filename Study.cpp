#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	srand(time(NULL));
	
	int intenger = rand() % 11;
	cout << intenger << endl;
}
