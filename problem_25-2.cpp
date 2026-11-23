#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadNumberInRange(int from,int to) {
    int num = 0;
    do {
        cout << "Enter Number In Range (" << from << " : " << to << "):" << endl;
        cin >> num;
    } while (num<from || num>to);
    return num;
}

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumber(int arr[100],int &len) {
    cout << "How Many Elements You Want In Array?\n";
    len=ReadNumberInRange(1,100);
    for (int i = 0; i < len; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int arr[100], int len) {
    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int MinInArray(int arr[100], int len) {
    int Min = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] < Min)
            Min = arr[i];
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], len;
    FillArrayWithRandomNumber(arr, len);
    
    cout << "Array Elements : ";
    PrintArrayElements(arr, len);

    cout << "Min Number Is : "<< MinInArray(arr, len);
    
}

