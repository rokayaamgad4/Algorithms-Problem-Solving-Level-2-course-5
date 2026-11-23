																			//MY Answer

//#include <iostream>
//#include <string>
//using namespace std;
//
//void PrintTableHeader() {
//	cout << "			Multiplication Table From 1 To 10			" << endl;
//	
//}
//
//void PrintTableNumber() {
//	cout << "	";
//	for (int i = 1; i <= 10; i++) {
//		cout << i << "	";
//	}
//	cout << endl;
//	cout << "__________________________________________________________________________________________" << endl;
//}
//
//void PrintMulResult() {
//	for (int i = 1; i <= 10; i++) {
//		if (i < 10)
//			cout << " "<<i << " |\t";
//		else
//			cout <<" "<< i << "|\t";
//		for (int j = 1; j <= 10; j++) {
//			cout << i * j << "  	";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	PrintTableHeader();
//	PrintTableNumber();
//	PrintMulResult();
//
//
//	return 0;
//}


																			//Better Answer

#include <iostream>
using namespace std;

void PrintTableHeader() {
	cout << "\n\n\t\t\tMultiplication Table From 1 To 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++) {
		cout << i << "\t";
	}
	cout << "\n________________________________________________________________________________________________\n";
}

string PrintColumnSeparator(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";

}

void PrintMulTable() {
	PrintTableHeader();
	for (int i = 1; i <= 10; i++) {
		cout << " " << i << PrintColumnSeparator(i)<<"\t";

		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";

		}
		cout << "\n";
	}

}


int main() {
	PrintMulTable();

	return 0;
}