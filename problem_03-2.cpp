			//perfect number = مجموع الارقام اللي الرقم دا بيقبل القسمه عليها ما عدا نفسه تساوي العدد نفسه
			//my solution
			

//#include <iostream>
//#include<string>
//using namespace std;
//
//int ReadPossitiveNumber(string Message) {
//	int num = 0;
//	do {
//		cout << Message << endl;
//		cin >> num;
//	} while (num <= 0);
//	return num;
//}
//
//int SumDivisorOfNumber(int num) {
//	int M = round(num / 2);
//	int sum = 0;
//	for (int i = 1; i <= M; i++) {
//		if (num % i == 0)
//			sum += i;
//	}
//	return sum;
//}
//
//bool CheckPerfect(int num) {
//	if (SumDivisorOfNumber(num) == num)
//		return true;
//	else
//		return false;
//}
//
//void PrintPerfectNumberOrNot(int num) {
//	if (CheckPerfect(num))
//		cout << "		" << num << " Perfect Number \n";
//	else
//		cout << "	" << num << " Not Perfect Number \n";
//}
//
//int main()
//{
//	PrintPerfectNumberOrNot(ReadPossitiveNumber("Enter Number To Check Perfect Or Not :"));
//
//	return 0;
//}


					//another solution
#include <iostream>
#include<string>
using namespace std;

int ReadPossitiveNumber(string Message) {
	int num = 0;
	do {
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

bool CheckPerfect(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0)
			sum += i;
	}
	return sum == num;
}

void PrintPerfectNumberOrNot(int num) {
	if (CheckPerfect(num))
		cout << "		" << num << " Perfect Number \n";
	else
		cout << "	" << num << " Not Perfect Number \n";
}

int main()
{
	PrintPerfectNumberOrNot(ReadPossitiveNumber("Enter Number To Check Perfect Or Not :"));

	return 0;
}