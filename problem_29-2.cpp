#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
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

void FillArrayWithRandomNumber(int arr[100], int& len) {
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

bool PrimeNumber(int num) {
	int M = round(num / 2);
	
	for (int counter=2; counter <= M; counter++) {
		if (num % counter == 0)
			return false;
	}
	return true;
}

void CopyPrimeArray(int arr[100], int arr2[100], int len,int &len2) {
	int counter= 0;
	for (int i = 0; i < len; i++) {
		if (PrimeNumber(arr[i])) {
			arr2[counter] = arr[i];
			counter++;
		}
	}
	len2 = counter;

}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], len=0;
	FillArrayWithRandomNumber(arr, len);
	cout << "\nArray 1 Elements : ";
	PrintArray(arr, len);

	int arr2[100],len2=0;
	CopyPrimeArray(arr, arr2,len,len2);
	cout << "\nPrime Elements In Array 2 : ";
	PrintArray(arr2, len2);

	return 0;
}

