#include <iostream>

using namespace std;

int main()
{
	int a = 0x12345678, b, c, d, e;
	b = a >> 4;
	c = a << 4;
	d = a ^ b;
	e = ~a;

	cout << hex << "16진수 a= " << a << dec << "\t10진수 a=" << a << endl;
	cout << hex << "16진수 b= " << b << dec << "\t10진수 b=" << b << endl;
	cout << hex << "16진수 c= " << c << dec << "\t10진수 c=" << c << endl;
	cout << hex << "16진수 d= " << d << dec << "\t10진수 d=" << d << endl;
	cout << hex << "16진수 e= " << e << dec << "\t10진수 e=" << e << endl;

	int A = 0xFF, B;
	B = A >> 4;
	cout << hex << "16진수 A= " << A << dec << "\t10진수 A=" << A << endl;
	cout << hex << "16진수 B= " << B << dec << "\t10진수 B=" << B << endl;
	return 0;
}