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

	int DigitFreq = 0, Rem = 0;
	while (num > 0) {
		Rem = num % 10;
		num /= 10;
		if (Rem == DigitToCheck) {
			DigitFreq++;
		}
	}
	return DigitFreq;
}

void AllDigitFrequency(int num) {
	for (int i = 0; i < 10; i++){
		int DigitFreq = 0;
		DigitFreq=CountDigitFrequency(i, num);
		if (DigitFreq > 0)
			cout << "Digit " << i << " Frequency is " << DigitFreq << " Time(S)." << endl;
	}
}

int main()
{
	AllDigitFrequency(ReadPossitiveNumber("Enter Number To Count Frequency of its Digits: "));
	
	return 0;

}

