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

void FillArray(int arr[100], int len) {
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

int CountOddNumbersInArray(int arr[100], int len) {
	int counter = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i]%2!=0)
			counter++;
	}
	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], len = 0;
	cout << "\n How Many Elements of Array : \n";
	len = ReadNumberInRange(1, 100);
	FillArray(arr, len);

	cout << "\nArray Elements : ";
	PrintArray(arr, len);

	cout << "\nOdd Numbers Count Is : " << CountOddNumbersInArray(arr, len) << endl;

	return 0;
}

