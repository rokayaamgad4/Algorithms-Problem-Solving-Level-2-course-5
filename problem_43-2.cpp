#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int& len) {
	cout << "How Many Elements Of Array? ";
	len = ReadNumberInRange(1, 10);
	for (int i = 0; i < len; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int EvenNumberCount(int arr[100], int len) {
	int counter = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] % 2 == 0)
			counter++;
	}
	return counter;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], len = 0;
	FillArrayWithRandomNumber(arr, len);
	cout << "\nArray Elements: ";
	PrintArray(arr, len);
	cout << "\nEven Number Count Is : " << EvenNumberCount(arr, len) << endl;

	return 0;
}

