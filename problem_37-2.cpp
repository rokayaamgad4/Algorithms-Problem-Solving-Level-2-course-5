#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumber(string Message) {
	int num = 0;
	cout << Message << endl;
	cin >> num;
	return num;
}

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message; 
		cin >> num;
	} while (num <= 0);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void AddElementToArray(int num, int arr[100], int &len) {
	arr[len] = num;
	len++;
}

void FillArrayWithRandomNumbers(int arr[100], int &len) {
	for (int i = 0; i < len; i++)
		arr[i] = RandomNumber(1, 100);
}

void CopyArray(int arr1[100], int arr2[100], int len1, int &len2) {
	
	for (int i = 0; i < len1; i++) {
		AddElementToArray(arr1[i], arr2, len2);
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

	int arr1[100], arr2[100], len1=ReadPossitiveNumber("How Many Elements Of Array?"), len2 = 0;

	FillArrayWithRandomNumbers(arr1, len1);
	cout << "\nArray 1 Element :\n";
	PrintArray(arr1, len1);

	CopyArray(arr1, arr2, len1, len2);
	cout << "\nArray 2 Element : \n";
	PrintArray(arr2, len2);


	return 0;
}

