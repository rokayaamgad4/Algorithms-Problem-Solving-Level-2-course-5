#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType { smallLetter = 1,capitalLetter=2,specialChar=3,digit=4 };

int ReadPositiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

enCharType ReadCharType(string Message) {
	int charType;
	do {
		cout << Message << endl;
		cin >> charType;
	} while (charType < 1 || charType > 4);
	return (enCharType)charType;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

char GetRandomChar(enCharType charType) {
	switch (charType) {
	case enCharType::smallLetter:
		return char(RandomNumber(97,122));
	case enCharType::capitalLetter:
		return char(RandomNumber(65,90));
	case enCharType::specialChar:
		return char(RandomNumber(33, 47));
	case enCharType::digit:
		return char(RandomNumber(48, 57));
	default:
		return '\0';

	}
	
}

string GetRandomWord(enCharType CharType, short len) {
	string word = "";
	for (int i = 1; i <= len; i++) {
		word = word + GetRandomChar(CharType);
	}
	return word;
}

string GenerateKey(enCharType CharType) {
	string key = "";
	key = key + GetRandomWord(CharType, 4) + "-";
	key = key + GetRandomWord(CharType, 4) + "-";
	key = key + GetRandomWord(CharType, 4) + "-";
	key = key + GetRandomWord(CharType, 4);
	return key;

}

void GenerateKeys(enCharType CharType,int NumOfKeys) {
	for (int i = 1; i <= NumOfKeys; i++) {
		cout << "Key[" << i << "]:"<<GenerateKey(CharType)<<endl;	
	}
}

int main()
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadCharType("Enter Char Type :\n1: for small leter \n2: for capital letter\n3: for special character\n4: for digit"),
		ReadPositiveNumber("Enter Number Of Keys : "));

	return 0;

}

