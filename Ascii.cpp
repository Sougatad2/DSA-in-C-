#include <iostream>
using namespace std;

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

    return 0;
}
