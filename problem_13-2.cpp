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

void PrintNumberPattern(int num) {
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << "\n";
	}
}

int main()
{
	PrintNumberPattern(ReadPossitiveNumber("Enter possitive Number: "));
	return 0;

}

