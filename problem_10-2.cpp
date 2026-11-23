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

int ReverseNumber(int num) {
	int Rem = 0, New_Num = 0;
	while (num > 0) {
		Rem = num % 10;
		num /= 10;
		New_Num =New_Num*10 + Rem;
	}
	return New_Num;
}

void PrintNumberFromLeftToRight(int num) {
	int Rem = 0;
	int num2 = ReverseNumber(num);
	while (num2 > 0) {
		Rem = num2 % 10;
		num2 /= 10;
		cout << Rem<<endl;

	}
}

int main()
{
	PrintNumberFromLeftToRight(ReadPossitiveNumber("Enter Possitive Number:"));
	return 0;

}

