#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "Enter Number In Range (" << from << " : " << to << "):" << endl;
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (from - to + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int &len) {
	
	
	for (int i = 0; i < len; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void SumOfTwoArrays(int arr1[100], int arr2[100],int arrSum[100], int len) {
	for (int i = 0; i < len; i++) {
		arrSum[i] = arr1[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrSum[100];
	cout << "How Many Elements Of Array?\n";
	int len = ReadNumberInRange(1, 100);
	

	FillArrayWithRandomNumber(arr1, len);
	cout << "\nArray 1 Elements : \n";
	PrintArray(arr1, len);

	FillArrayWithRandomNumber(arr2, len);
	cout << "\nArray 2 Elements : \n";
	PrintArray(arr2, len);

	SumOfTwoArrays(arr1, arr2, arrSum, len);
	cout << "\nSum Of Array 1 and Array 2 Elements : \n";
	PrintArray(arrSum, len);
	return 0;
}

