#include <iostream>

using namespace std;

int getSize()
{
	return 200;
}

int main()
{
	//const int size = 100;
	const int bufferSize = getSize();
	cout << getSize() << endl;
	//size = 200;//�̹� ���ȭ �� size������ ���� ���� ��ų �� ����
	//const int count; //�ʱ�ȭ�� ���� ������ ������� �ȵ�
	return 0;
}