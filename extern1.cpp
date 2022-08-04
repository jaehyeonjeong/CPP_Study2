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
	//size = 200;//이미 상수화 된 size변수의 값을 변동 시킬 수 없음
	//const int count; //초기화를 하지 않으면 상수값이 안됨
	return 0;
}