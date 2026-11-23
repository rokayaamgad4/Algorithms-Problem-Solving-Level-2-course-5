#include <iostream>
#include <string>
using namespace std;

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

void ReadArrayElements(int arr[100],int &arrLen) {
	cout << "Enter Length Of Array: \n";
	cin >> arrLen;

	cout << "Enter Array Elements : \n";
	for (int i = 0; i < arrLen; i++) {
		cout << "Element[" << i + 1 << "]:";
		cin >> arr[i];
	}
	cout << "\n";
}

int RepeatTimes(int arr[100], int len,int numToCheck) {
	int counter = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == numToCheck)
			counter++;
	}
	return counter;
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int len ,arr[100];
	ReadArrayElements(arr, len);

	int numToCheck=ReadPossitiveNumber("Enter Number You want to Check :");

	cout << "\nOriginal Array : ";
	PrintArray(arr, len);

	cout << numToCheck << " is repeated " << RepeatTimes(arr, len, numToCheck) << " Time(s);" << endl;
	
	return 0;
}

