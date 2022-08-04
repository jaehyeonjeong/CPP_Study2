#include <iostream>

using namespace std;

void Swap1(int* a, int* b);
void Swap2(int& a, int& b);

int main()
{
	int a = 1, b = 2;
	cout << a << ", " << b << endl;
	Swap2(a, b);
	cout << a << ", " << b << endl;
	Swap1(&a, &b);
	cout << a << ", " << b << endl;
	
}

void Swap1(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void Swap2(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}