#include <iostream>
using namespace std;

int main() {
    int num;


    cout << "Enter an integer (65-90): ";
    cin >> num;

    
    if (num >= 65 && num <= 90) {
        char letter = (char) num;
        cout << "Corresponding uppercase letter: " << letter << endl;
    } else {
        cout << "Error: Please enter a number between 65 and 90." << endl;
    }

    return 0;
}
