#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enCharType{smallChar=1,capitalChar=2,specialChar=3,digit=4};

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

char GenerrateRandomChar(enCharType CharType) {
	switch(CharType){
	case enCharType::capitalChar:
		return (char)RandomNumber(65, 90);
	case enCharType::smallChar:
		return (char)RandomNumber(97, 122);
	case enCharType::specialChar:
		return (char)RandomNumber(33, 47);
	case enCharType::digit:
		return (char)RandomNumber(48, 57);
	defaule:
		return '\0';
	}
	
}

string GenerateWord(enCharType charType,int len) {
	string word = "";
	for (int i = 0; i < len; i++) {
		word += GenerrateRandomChar(charType);
	}
	return word;
}

string GenerateKey() {
	string key = "";
	key += GenerateWord(enCharType::capitalChar, 4) + "-";
	key += GenerateWord(enCharType::capitalChar, 4) + "-";
	key += GenerateWord(enCharType::capitalChar, 4) + "-";
	key += GenerateWord(enCharType::capitalChar, 4) ;
	return key;

}

void FillArrayWithKeys(string arr[100],int &len) {
	for (int i = 0; i < len; i++) {
		arr[i] = GenerateKey();
	}
}

void PrintArray(string arr[100],int len) {
	for (int i = 0; i < len; i++) {
		cout << "Array[" << i << "]: " << arr[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	string arr[100];
	int	len = ReadPossitiveNumber("Enter Number Of Keys You Need : \n");
	FillArrayWithKeys(arr, len);
	cout << "\nArray Elements : \n";
	PrintArray(arr, len);
	return 0;

}

