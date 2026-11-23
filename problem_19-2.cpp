#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int from, int to) {
	int randNum = 0;
	randNum = rand() % (to - from + 1) + from;
	return randNum;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(1, 10)<<endl;
	cout << RandomNumber(1, 10)<<endl;
	cout << RandomNumber(1, 10) << endl;

	return 0;
}

