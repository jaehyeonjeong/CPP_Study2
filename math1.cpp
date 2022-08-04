#include <iostream>
//#define _USE_MATH_DEFINES
#include <corecrt_math_defines.h>
//#include <cmath>
//#include <math.h>

using namespace std;

int main()
{
	int i = 3.65;
	long l = M_PI;
	long float f = M_PI;
	double d = M_PI;

	cout << i << endl;
	cout << l << endl;
	cout << f << endl;
	cout << d << endl;

	printf("%d, %ld\n", i, l);
	printf("%.20llf, %.20lf\n", f, d);

	return 0;
}