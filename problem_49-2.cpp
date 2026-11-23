#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
    float num;
    cout << "Please Enter Number : \n";
    cin >> num;
    return num;
}

float GetFractionPart(float num) {
    return num - (int)num;
}

int MyCeil(float num) { 
    if (abs(GetFractionPart(num)) > 0)
    {
        if (num < 0)
            return (int)num;
        else
            return (int)num + 1;
    }
    else
        return num;
}

int main()
{
    float num = ReadNumber();
    cout << "My Ceil :" << MyCeil(num) << endl;
    cout << "C++ Ceil :" << ceil(num) << endl;

    return 0;
}

