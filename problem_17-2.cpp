#include <iostream>
#include <string>
using namespace std;

string ReadPassword() {
	string pass = "";
	cout << "Enter 3 Leter Password (All Capital): \n";
	cin >> pass;
	return pass;
}

bool Guess3LettersPassword(string pass) {
	int trial = 0;
	string word = "";

	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				trial++;
				word = word + (char)i;
				word = word + (char)j;
				word = word + (char)k;

				cout << "Trial[" << trial << "]:" << word<<endl;

				if (word == pass) {
					cout << "\n\n";
					cout << "Password is " << word << "\n"
						<< "Found After " << trial << " Trial(s)." << endl;
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main()
{
	Guess3LettersPassword(ReadPassword());
	return 0;
}

