#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    int totalChars = 2 * n - 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            cout <<  j << " ";
        }

        
        for (int s = 0; s < 4 * i; s++) { 
            cout << " ";
        }
        for (int j = totalChars - (n - i - 1); j < totalChars; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
