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
//����������?? (class�� ���������ڸ� ������ �ִ�.)

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
	cout << "ö���� �Դ´�" << endl;
}

void Chulsoo::Eat_potato(int potato)
{
	cout << "ö���� ���ڸ� " << potato << "�� �Դ´�." << endl;
}