#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(string Message, int from, int to) {
    int num = 0;
    do {
        cout << Message << endl;
        cin >> num;
    } while (num<from || num>to);
    return num;
}

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int& len) {
    len = ReadNumberInRange("How Many Elements Of Array ? ", 1, 100);

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

void AddElementToArray(int num, int arr[100], int& len) {
    arr[len] = num;
    len++;
}

bool IsPrimeNumber(int num) {
    int M = round(num / 2);
    for (int c = 2; c <= M; c++) {
        if (num % c == 0) {
            return false;
        }
    }

    return true;
}

void CopyPrimeNumbers(int arr1[100], int arr2[100], int len1, int& len2) {
    for (int i = 0; i < len1; i++) {
        if (IsPrimeNumber(arr1[i]))
            AddElementToArray(arr1[i], arr2, len2);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], len1 = 0, len2 = 0;

    FillArrayWithRandomNumber(arr1, len1);
    cout << "\nArray 1 Element : \n";
    PrintArray(arr1, len1);

    CopyPrimeNumbers(arr1, arr2, len1, len2);
    cout << "\nArray Of Prime Number : \n";
    PrintArray(arr2, len2);

    return 0;
}

