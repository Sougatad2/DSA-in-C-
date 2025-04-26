#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    int totalChars = 2 * n - 1; // I think the question have some error

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << char('A' + j) << " ";
        }
        for (int s = 0; s < 4 * i; s++) {
            cout << " ";
        }
        for (int j = totalChars - (n - i - 1); j < totalChars; j++) {
            cout << char('A' + j) << " ";
        }

        cout << endl;
    }

    return 0;
}
