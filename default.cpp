#include <iostream>

using namespace std;

int Adder(int num1 = 1, int num2 = 2);
int Adder_new(int num1, int num2 = 3, int num3 = 4);

int main()
{
	cout << Adder() << endl;
	cout << Adder(2) << endl;
	cout << Adder(3, 5) << endl;
	//cout << Adder_new() << endl; //error
	cout << Adder_new(4, 4) << endl;
	cout << Adder_new(33) << endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}

int Adder_new(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}