#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
	float num = 0;
	cout << "Enter Number : \n";
	cin >> num;
	return num;
}

float GetFractionPart(float num) {
	return num - int(num);
	
}

int MyRound(float num) {
	int IntPart = int(num);
	if (abs(GetFractionPart(num)) >= 0.5)
			if(num>0)
				return ++IntPart;
			else
				return --IntPart;
		else
			return IntPart;

}

int main()
{
	float num = ReadNumber();
	cout << "\nMy Round : " << MyRound(num) << endl;
	cout << "\nC++ Round : " << round(num) << endl;
	return 0;

}
