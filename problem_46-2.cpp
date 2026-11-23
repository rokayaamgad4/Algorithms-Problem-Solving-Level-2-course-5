#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
	int num = 0;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

int MyAbs(int num) {
	if (num > 0)
		return num;
	else
		return num * -1;
}

int main()
{
	float num = ReadNumber();
	cout << "\nMy Abs: "<< MyAbs(num);
	cout << "\n c++ Abs: " << abs(num) << endl;
	
	
	return 0;
}

