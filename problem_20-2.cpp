#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int from, int to) {

	int randNumb = rand() % (to - from + 1) + from;
	return randNumb;
}

enum enRandomType { smallLetter = 1,capitalLetter=2,specialChar=3,digit=4 };

char PrintRandom(enRandomType TypeOfRandom) {

	switch (TypeOfRandom) {
	case enRandomType::smallLetter:
		return char(RandomNumber(97, 122));
	case enRandomType::capitalLetter:
		return char(RandomNumber(65, 90));
	case enRandomType::specialChar:
		return char(RandomNumber(33, 47));
	case enRandomType::digit:
		return char(RandomNumber(48, 57));
	default:
		return '\0';
	}
	
}

int main()
{
	srand((unsigned)time(NULL));

	cout<<PrintRandom(enRandomType::smallLetter)<<endl;
	cout<<PrintRandom(enRandomType::capitalLetter)<<endl;
	cout<<PrintRandom(enRandomType::specialChar)<<endl;
	cout<<PrintRandom(enRandomType::digit)<<endl;

	return 0;
}

