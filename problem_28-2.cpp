#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "Enter Number In Range(" << from << " : " << to << "): " << endl;
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int &len) {
	cout << "Enter Length Of Array \n";
	len = ReadNumberInRange(1, 100);

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

void CopyArray(int arr[100],int arr2[100], int len) {
	for (int i = 0; i < len; i++) {
		arr2[i] = arr[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100],arr2[100], len;
	FillArrayWithRandomNumber(arr, len);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, len);



	CopyArray(arr,arr2, len);
	cout << "\nArray 2 Elements : \n";
	PrintArray(arr2, len);

	return 0;
}

