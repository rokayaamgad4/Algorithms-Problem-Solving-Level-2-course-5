							//my solution

//#include <iostream>
//using namespace std;
//
//int ReadNumber(string Message) {
//	int num = 0;
//	cout << Message<< endl;
//	cin >> num;
//	return  num;
//}
//
//int ReadNumberInRange(int from, int to) {
//	int num = 0;
//	do {
//		cout << "(Enter valid Number):";
//		cin >> num;
//
//	} while (num<from || num>to);
//	return num;
//}
//
//bool AddMoreOrNot() {
//	
//	cout << "Do You Want To Add More Number ?[0]:NO  [1]:Yes?";
//	return ReadNumberInRange(0, 1);
//}
//
//void FillArray(int arr[100], int &len) {
//	int num;
//	do {
//		num = ReadNumber("Please Enter A Number ? ");
//		arr[len] = num;
//		len++;
//	} while (len<100&&AddMoreOrNot());
//
//}
//
//void PrintArray(int arr[100],int len) {
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//
//int main()
//{
//	int arr[100], len=0;
//	FillArray(arr, len);
//
//	cout << "\nArray Length = " << len << endl;
//	cout << "Array Elements : ";
//	PrintArray(arr, len);
//}
//

										//Doctor solution
#include <iostream>
using namespace std;

int ReadNumber(string Message) {
	int num = 0;
	cout << Message;
	cin >> num;
	return num;
}

int ReadNumberInRange(int from, int to) {
	int num = 0;
	do {
		cout << "\n(Enter Valid Choice): ";
		cin >> num;
	} while (num<from || num>to);
	return num;
}

void AddElementToArray(int num, int arr[100], int& len) {
	arr[len] = num;
	len++;
}

void FillArrayNumbersFromUser(int arr[100], int &len) {
	bool addMore;
	do {
		AddElementToArray(ReadNumber("\nPlease Enter A Number: "), arr, len);

		cout << "\nDo You Want To Add More Elements?[0]:No  [1]:Yes.";
		addMore = ReadNumberInRange(0, 1);

	} while (len < 100 && addMore);
}

void PrintArray(int arr[100], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr[100],len=0;
	FillArrayNumbersFromUser(arr, len);
	cout << "\nArray Length : " << len ;
	cout << "\nArray Elements : ";
	PrintArray(arr, len);
	return 0;
}
