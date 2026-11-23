#include <iostream>
#include <string>
using namespace std;

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

void PrintInvertedPattern(int num) {
	for (int i = num; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedPattern(ReadPossitiveNumber("Enter Possitive Number :"));
}

