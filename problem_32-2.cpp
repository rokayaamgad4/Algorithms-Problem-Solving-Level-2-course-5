#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "Enter Number In Range (" << from << ":" << to << "):" << endl;
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWith1ToN(int arr[100], int& len) {
	for (int i = 0; i < len; i++)
		arr[i] = i + 1;
}

void FillArrayWithRandomNumber(int arr[100], int len) {
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

void CopyArrayInReverseOrder(int arr1[100], int arr2[100], int len) {
	
	for (int i = 0; i < len; i++) {
		arr2[i] = arr1[len - 1 - i];
	}
	
	//int Rev = len - 1;
	//for (int i = 0; i < len; i++) {
	//	arr2[i] = arr1[Rev];
	//	Rev--;
	//}
}

void PrintArrayInReverseOrder(int arr[100], int len) {
	for (int i = len - 1; i >= 0; i--)
		cout << arr[i] << " ";

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100];
	cout << "How Many Elements Of Array ?\n";
	int len = ReadNumberInRange(1, 100);

	FillArrayWithRandomNumber(arr, len);
	cout << "\nArray Elements : \n";
	PrintArray(arr, len);

	CopyArrayInReverseOrder(arr, arr2, len);
	cout << "\nArray 2 In Reverse Order : \n";
	PrintArray(arr2, len);

	return 0;
}

