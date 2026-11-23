#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "Enter Number In Range (" << from << " : " << to << "): \n";
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLen) {
	cout << "Enter Number Of Elements: \n";
	arrLen=ReadNumberInRange(1,100);

	for (int i = 0; i < arrLen; i++) {
		arr[i]= RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLen) {
	for (int i = 0; i < arrLen; i++) {
		cout << arr[i]<<" ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLeng;
	FillArrayWithRandomNumbers(arr, arrLeng);
	cout << "Array Elements : ";
	PrintArray(arr, arrLeng);

	return 0;
}

