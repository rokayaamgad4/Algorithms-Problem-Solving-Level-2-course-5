
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrime{prime=1,notPrime=0};

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message<<endl;
		cin >> num;
	} while (num < 0);
	return num;
}

enPrime CheckPrime(int num) {
	int counter=2;
	int M = round(num / 2);
	
	
	for (int i = counter; i <= M; i++) {
		if (num % i == 0)
			return enPrime::notPrime;
	}
	return enPrime::prime;
}
	


void PrintPrimeNumbersFrom1ToN(int num) {
	for (int i = 1; i <= num; i++) {
		if(CheckPrime(i)==enPrime::prime){
			cout << i << endl;
		}
	}
}
int main()
{
	//cout<<CheckPrime(9);
	PrintPrimeNumbersFrom1ToN(ReadPossitiveNumber("Enter Possitive Number To Print Prime Numbers from 1 To Number: "));
	return 0;
}

