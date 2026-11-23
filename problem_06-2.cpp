#include <iostream>
#include <string>
using namespace std;

int ReadPossitiveNumber(string Message) {
    int num = 0;
    do {
        cout << Message << endl;
        cin >> num;
    } while (num < 0);
    return num;
}

int SumOfDigits(int num) {
    int Rem = 0, sum = 0;
    while (num > 0) {
        Rem = num % 10;
        num /= 10;
        sum += Rem;
    }
    return sum;
}

void PrintSumOfDigits(int num) {
    cout << "Sum Of Digits = " << SumOfDigits(num) << endl;
}
int main()
{   
    PrintSumOfDigits(ReadPossitiveNumber("Enter Number To Sum Digits Of It : "));
    return 0;

}

