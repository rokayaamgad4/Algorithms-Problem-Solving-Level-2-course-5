#include <iostream>
#include <string>
using namespace std;

int ReadPossitiveNumbers(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

void PrintNumberInReverseOrder(int num) {
	int Rem = 0;				//1230	123		12		1		0(while stopped num=0)
	while (num>0){                
		Rem = num % 10;				//0		3		2		1
		cout << Rem << endl;		//0		3		2		1
		num /= 10;					//123	12		1		0
	}
}
int main()
{
	PrintNumberInReverseOrder(ReadPossitiveNumbers("Enter Number To Print it In Reverse Order : "));
	return 0;

}

