#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

int ReadNumberInRange(int from,int to) {
	int num = 0;
	do {
		cout << "Enter Number from "<<from<<" to "<<to << ":\n";
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLen) {
	cout << "Enter Number Of Elements \n";
	arrLen = ReadNumberInRange(1, 100);

	for (int i = 0; i < arrLen; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLen) {
	for (int i = 0; i < arrLen; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int MaxElementInArray(int arr[100], int arrLen) {
	int Max=0;
	for (int i = 0; i < arrLen; i++) {
		if (arr[i] > Max)
			Max = arr[i];
	}
	return Max;
}

int main()
{
	srand((unsigned)time(NULL));

	int len, arr[100];

	FillArrayWithRandomNumbers(arr, len);

	cout << "Array Elements: ";
	PrintArray(arr, len);

	cout << "\nMax Number is : " << MaxElementInArray(arr, len)<<endl;

	return 0;

}

