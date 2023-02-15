#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	srand(time(NULL));

	int Hi = rand() % 11;
	cout << Hi << endl;
}