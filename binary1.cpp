#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	fstream fp;
	int data, score[5] = { 78, 96, 100, 25, 96 };

	fp.open("sample.txt", ios::out | ios::binary); //출력 이진파일 설정
	fp.write((char*)score, 20); //score
	fp.close();

	fp.open("sample.txt", ios::in | ios::binary);
	if (fp.fail()) return 1;

	fp.read((char*)&data, 4);
	cout << setw(3) << right << data << endl;

	fp.seekg(4, ios::cur);
	fp.read((char*)&data, 4);
	cout << setw(3) << right << data << endl;

	fp.close();

	return 0;
}