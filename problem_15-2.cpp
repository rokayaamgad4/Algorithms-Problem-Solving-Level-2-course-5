#include <iostream>
#include <string>
using namespace std;

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

void printLetterPattern(int num) {
	cout << "\n";
	for (int i = 65; i <= num + 64; i++) {
		for (int j = 65; j <= i; j++) {
			cout <<(char)i;
		}
		cout << "\n";
	}
}

int main()
{
	printLetterPattern(ReadPossitiveNumber("Enter Possitive Number : "));

	return 0;

}

