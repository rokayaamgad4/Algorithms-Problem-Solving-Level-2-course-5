#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumberInRange(int from, int to) {
    int num = 0;
    do {
        cout << "Enter Number In Range (" << from << " : " << to << "):" << endl;
        cin >> num;
    } while (num < from || num > to);
    return num;
}

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100], int &len) {
    cout << "How Many Elements You Want?\n";
    len = ReadNumberInRange(1, 100);
    
    for (int i = 0; i < len; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int arr[100],int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int SumArray(int arr[100], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

float AverageOfArray(int arr[100], int len) {
    return (float)SumArray(arr, len) / len;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], len;
    FillArrayWithRandomNumber(arr, len);

    cout << "\nArray Elements : ";
    PrintArrayElements(arr, len);

    cout << "\nAverage Of All Number Is : " << AverageOfArray(arr, len) << endl;

    return 0;

}

