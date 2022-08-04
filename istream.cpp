#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream input;
	char message[80];
	input.open("test.txt");
	input >> message;
	cout << message << endl;
	input.close();
	return 0;
}