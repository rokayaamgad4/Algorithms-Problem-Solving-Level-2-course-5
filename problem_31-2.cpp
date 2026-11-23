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

void Swap(int &a, int &b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWith1ToN(int arr[100], int &len) {
	for (int i = 0; i < len; i++)
		arr[i] = i+1;
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ShuffleArray(int arr[100],  int len) {

	for (int i = 0; i < len; i++) {
		Swap(arr[RandomNumber(0, len - 1)], arr[RandomNumber(0, len - 1)]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	cout << "How Many Elemnts Of Array?\n";
	int len = ReadNumberInRange(1, 100);

	FillArrayWith1ToN(arr, len);
	cout << "\nArray Elements Before Shuffle:\n";
	PrintArray(arr, len);

	ShuffleArray(arr, len);
	cout << "\nArray Elements After Shuffle:\n";
	PrintArray(arr, len);

	return 0;
}

