#include <iostream>
using namespace std;

<<<<<<< HEAD
int main() {
    char ch = 'A';

    cout << "Uppercase letters and their ASCII values:\n";
    while (ch <= 'Z') {
        cout << ch << " = " << int(ch) << endl;
        ch++;
    }

    ch = 'a';
    cout << "\nLowercase letters and their ASCII values:\n";
    while (ch <= 'z') {
        cout << ch << " = " << int(ch) << endl;
        ch++;
    }
=======
void convertCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Lowercase: " << char(ch + 32) << endl;
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Uppercase: " << char(ch - 32) << endl;
    } 
    else {
        cout << "Invalid input! Please enter an alphabetic character.\n";
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    convertCase(ch);
>>>>>>> 6bdc78508736018172655bf7b2dffe9b8bb9f2b9

    return 0;
}
