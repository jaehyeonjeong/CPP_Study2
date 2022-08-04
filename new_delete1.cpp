#include <iostream>

using namespace std;

int main()
{
	float f_num;
	cin >> f_num;
	int* data = new int[static_cast<int>(f_num)];
	for (int i = 0; i < f_num; i++)
	{
		cin >> data[i];
	}
	delete[] data;
}