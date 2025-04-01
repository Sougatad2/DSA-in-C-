#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "The character is an Alphabet." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "The character is a Digit." << endl;
    else
        cout << "The character is a Special Character." << endl;

    return 0;
}
