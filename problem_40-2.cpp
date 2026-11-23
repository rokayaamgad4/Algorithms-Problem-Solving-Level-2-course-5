					//my solution

//#include <iostream>
//using namespace std;
//
//void FillArrayHard(int arr[100], int &len1) {
//	len1 = 10;
//
//	arr[0] = 10;
//	arr[1] = 10;
//	arr[2] = 10;
//	arr[3] = 50;
//	arr[4] = 50;
//	arr[5] = 70;
//	arr[6] = 70;
//	arr[7] = 70;
//	arr[8] = 70;
//	arr[9] = 90;
//}
//
//void AddElementToArray(int num, int arr[100], int &len) {
//	arr[len] = num;
//	len++;
//}
//
//void CopyDistinctElement(int arr1[10], int arr2[10], int len1, int &len2) {
//	AddElementToArray(arr1[0], arr2, len2);
//	for (int i = 1; i < len1; i++) {
//		for (int j = 0; j < len2; j++) {
//			if (arr1[i] != arr2[j]) {
//				if (j == len2 - 1)
//					AddElementToArray(arr1[i], arr2, len2);
//				else 
//					continue;
//			}
//			else break;
//		}
//		 
//	}
//}
//
//void PrintArray(int arr[100],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int len1=0 , len2=0 ;
//	int arr1[10], arr2[10];
//	FillArrayHard(arr1, len1);
//	cout << "\nArray 1 Elemnt : \n";
//	PrintArray(arr1, len1);
//
//	CopyDistinctElement(arr1, arr2, len1, len2);
//	cout << "\nArray Of Distinct Elemnt : \n";
//	PrintArray(arr2, len2);
//
//	return 0;
//}
//
							//Doctor solution

#include <iostream>
using namespace std;

void FillArrayHardCoded(int arr[100], int& len1) {
	len1 = 10;

	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void AddElementToArray(int num, int arr[100], int& len) {
	arr[len] = num;
	len++;
}

short FindPositionOfNumInArray(int num, int arr[100], int &len) {
	for (int i = 0; i < len; i++) {
		if (num == arr[i])
			return i;
	}
	return -1;
}

bool IsNumberInArray(int num, int arr[100], int &len) {
	return FindPositionOfNumInArray(num, arr, len) != -1;
}

void CopyDistinctElemnt(int arr1[100], int arr2[100], int len1, int &len2) {
	for (int i = 0; i < len1; i++) {
		if (!IsNumberInArray(arr1[i], arr2, len2))
			AddElementToArray(arr1[i], arr2, len2);
		
	}
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int len1 = 0, len2 = 0;
	int arr1[100], arr2[100];

	FillArrayHardCoded(arr1, len1);
	CopyDistinctElemnt(arr1, arr2, len1, len2);
	cout << "\nArray 1 Elemnts : \n";
	PrintArray(arr1, len1);
	cout << "\nArray Of Distinct Elemnts : \n";
	PrintArray(arr2, len2);


	return 0;
}

