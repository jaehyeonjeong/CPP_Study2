#include <iostream>

using namespace std;

void swap(int* a, int* b);
void swap2(int& a, int& b);

int main()
{
	int x, y;
	x = 1, y = 2;
	cout << "�������� : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	swap(x, y);
	cout << "����1���� : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	swap2(x, y);
	cout << "����2���� : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	swap(x, y);
	cout << "����1���� : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	swap2(x, y);
	cout << "����2���� : " << endl;
	cout << "x : " << x << ", y : " << y << endl;
	return 0;
}

void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap2(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	//tmp ��� a�� b�� �ٲ�
}