#include <iostream>
using namespace std;

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

    return 0;
}
