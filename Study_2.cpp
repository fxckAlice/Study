#include <iostream>
#include <ctime>
using namespace std;

template<typename T1, typename T2>
void Sum(T1 a, T2 b, T1 sum)
{
	sum = a + b;
	cout << sum << endl;
}

void main()
{
	srand(time(NULL));

	int sum = 0;
	int a = rand() % 11, b = rand() % 11;

	Sum(&a, &b, &sum);
}