#include <iostream>

using namespace std;

int main()
{
	int* p = NULL;
	p = new int(0); //���� �޸� �Ҵ� �� �ʱ�ȭ
	if (p == NULL)
	{
		cout << "���� �޸� �Ҵ� ����\n";
		return 1;
	}
	cout << "������ �Է��ϼ��� : ";
	cin >> *p; //���� �޸� ���
	cout << "�Էµ� ������ " << p[0] << "\n"; //���� �޸� ���
	delete p; //�����޸� ����
	p = NULL;

	return 0;
}