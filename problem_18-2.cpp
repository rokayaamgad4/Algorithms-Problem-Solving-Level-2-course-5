#include <iostream>
#include <string>
using namespace std;

string ReadText(){
    string Text = "";
    cout << "Enter Text : \n";
    getline(cin, Text);
    return Text;
}

string TextAfterEncyption(string Text,short EncryptionKey) {
    for (int i = 0; i < Text.length(); i++) {
        Text[i] = (char)((int)Text[i] + EncryptionKey);
    }
    return Text;
}
string TextAfterDecryption(string Text, short EncryptionKey) {
    for (int i = 0; i < Text.length(); i++) {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    string Text = ReadText();
    const short EncryptionKey = 2;

    string EncryptedText = TextAfterEncyption(Text, EncryptionKey);
    string DecryptedText = TextAfterDecryption(EncryptedText, EncryptionKey);

    cout << "Text Before Encryption : " << Text << endl;
    cout <<"Text After Encryption : " << EncryptedText <<endl;
    cout << "Text After Decryprion : " <<DecryptedText  << endl;
    return 0;
}

