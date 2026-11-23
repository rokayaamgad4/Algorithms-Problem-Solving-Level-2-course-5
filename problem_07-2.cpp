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
	int Rem = 0,num2=0;
	while (num > 0) {
		Rem = num % 10;
		num /= 10;
		num2 = num2 * 10 + Rem;
	}
	return num2;
}

int main()
{
	cout<<ReverseNumber(ReadPossitiveNumber("Enter Possitive Number : "));
	return 0;

}

