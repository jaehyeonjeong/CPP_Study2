#include <iostream>

using namespace std;

class Restaurant
{
public:
	int Steak;
};

class Chulsoo
{
public:
	int Eat(int& );
};

int Chulsoo::Eat(int &SteakNum)
{
	SteakNum = 10000;
	cout << "ö���� �Դ´�" << endl;
	return SteakNum;

}

int main()
{
	Chulsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;
	cout << "ö���� " << chulsoo.Eat(restaurant.Steak) << "�� ¥�� ������ũ��"
		<< " �Ծ��ٰ� �������� �ߴ�." << endl;
	cout << "��������� ö���� " << restaurant.Steak << "�� ¥�� ������ũ��"
		<< " �Ծ��ٰ� �˰� �ִ�." << endl;

	return 0;
}
