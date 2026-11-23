#include <iostream>
using namespace std;


void FillArray(int arr[100], int &len) {

	len = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;	
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindrome(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		
		if (arr[i] != arr[len-i-1])
			
			return false;
	}
	return true;
}

int main()
{
	int arr[100], len=0 ;
	FillArray(arr, len);

	cout << "\nArray Elements : \n";
	PrintArray(arr, len);
	
	if (IsPalindrome(arr, len))
		cout << "\nYes , Array Is Palindrome.. \n";
	else
		cout << "\n No , Array Is Not Palindrome.\n";


	return 0;
}

