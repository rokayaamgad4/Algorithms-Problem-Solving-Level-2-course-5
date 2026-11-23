#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
    float num;
    cout << "Please Enter Number : \n";
    cin >> num;
    return num;
}

int MyFloor(float num) {
    if (num >= 0)
        return (int)num;
    else
        return (int)num-1;
}

int main()
{
    float num = ReadNumber();
    cout << "My Floor :" << MyFloor(num) << endl;
    cout << "C++ Floor :" << floor(num) << endl;

    return 0;
}

