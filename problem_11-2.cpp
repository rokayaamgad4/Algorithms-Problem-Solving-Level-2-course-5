#include <string>
#include <iostream>
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
	int Rem = 0, num2 = 0;
	while (num > 0) {
		Rem = num % 10;
		num /= 10;
		num2 = num2 * 10 + Rem;
	}
	return num2;
}

bool CheckPalindromeNumber(int num) {
	return (num == ReverseNumber(num));
}

void IsPalindromeNumberOrNot(int num) {
	if (CheckPalindromeNumber(num))
		cout << "Yes,It Is a Palindrome Number " << endl;
	else
		cout << "No,It Is Not a Palindrome Number" << endl;
}

int main()
{
	IsPalindromeNumberOrNot(ReadPossitiveNumber("Enter Possitive Number : "));
	return 0;

}

