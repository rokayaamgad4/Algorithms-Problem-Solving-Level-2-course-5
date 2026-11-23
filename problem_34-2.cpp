#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "Enter number from " << from << " to " << to << " : \n";
		cin >> num;
	} while (num<from || num>to);
	return num;
}

int RandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int &len) {
	cout << "How Many Elements In Array? \n";
	len = ReadNumberInRange(1, 100);
	for (int i = 0; i < len; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPosition(int arr[100], int len,int searchFor) {
	for (int i = 0; i < len; i++) {
		if (arr[i] == searchFor)
			return i;
	}
	return -1;

}

void PrintNumberPosition(int arr[100], int len, int searchFor) {
	short position = FindNumberPosition(arr, len, searchFor);
	if (position==-1) {
		cout << "The Number Is Not Found :-( \n";	
	}
	else {
		cout << "The Number Found At Position: " << position << endl;
		cout << "The Number Found Its Order Is: " << position + 1 << endl;
	}



}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], len;

	FillArrayWithRandomNumber(arr, len);
	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, len);

	int Num = ReadPositiveNumber("\nPlease Enter Number To Search For : ");
	cout << "Number You Are Looking For : " << Num << endl;
	PrintNumberPosition(arr, len, Num);

	return 0;
}

