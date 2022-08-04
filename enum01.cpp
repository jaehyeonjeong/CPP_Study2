#include <iostream>

using namespace std;

//auto¿Í decltype
//enum
enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main()
{
	int i;
	cout << "Input the date(0 ~ 6) : " << endl;
	cin >> i;

	if (i == SUN || i == SAT)
		cout << "Thanks God, It's holiday" << endl;
	else
		cout << "Whoops, It's Working day" << endl;
	return 0;
}