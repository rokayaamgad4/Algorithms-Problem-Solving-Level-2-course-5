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

int CountDigitFrequency(short DigitToCheck, int num) {
	
	int DigitFreq = 0,Rem = 0;
	while (num > 0) {
		Rem = num % 10;
		num /= 10;
		if (Rem == DigitToCheck) {
			DigitFreq++;
		}
	}
	return DigitFreq;
}

void PrintDigitFrequency(short DigitToCheck,int num) {
	cout << "Digit " << DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, num) << " Time(s)." << endl;
}

int main()
{
	PrintDigitFrequency(ReadPossitiveNumber("Enter Digit you want to count: "),
						ReadPossitiveNumber("Enter Possitive Number :"));
	return 0;
}

