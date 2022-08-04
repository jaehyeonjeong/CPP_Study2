#include <iostream>

using namespace std;

class Chulsoo
{
protected:
	int potato;
public:
	void Eat();
	void Eat_potato(int potato);
};
//접근지정자?? (class는 접근지정자를 가지고 있다.)

int main()
{
	int potato = 5;
	Chulsoo chulsoo;
	chulsoo.Eat();
	chulsoo.Eat_potato(potato);
	return 0;
}

void Chulsoo::Eat()
{
	cout << "철수는 먹는다" << endl;
}

void Chulsoo::Eat_potato(int potato)
{
	cout << "철수는 감자를 " << potato << "개 먹는다." << endl;
}