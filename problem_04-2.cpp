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

bool isPerfectNumber(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0)
			sum += i;
	}
	return sum == num;
}

void PrintPerfectNumbersFrom1ToN(int num) {
	for (int i = 1; i <= num; i++) {
		if (isPerfectNumber(i))
			cout << i << endl;
	}
}

int main()
{
	PrintPerfectNumbersFrom1ToN(ReadPossitiveNumber("Enter Number To Print Perfect numbers from 1 To number :"));

	return 0;
}
