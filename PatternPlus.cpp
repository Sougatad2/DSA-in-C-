#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size (example 5): ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) cout << " ";

        if (i == 1) {
            cout << "*";
        }
        else if (i == 2) {
            cout << "***";
        }
        else {
            for (int j = 1; j <= i; j++) {
                cout << "*";
                if (j != i) {
                    for (int s = 1; s <= i - 1; s++) cout << " "; // i-1 spaces between stars
                }
            }
        }
        cout << endl;
    }

    
    for (int i = 1; i <= 2 * n; i++) cout << "*";
    cout << endl;

  
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) cout << " ";

        if (i == 1) {
            cout << "*";
        }
        else if (i == 2) {
            cout << "***";
        }
        else {
            for (int j = 1; j <= i; j++) {
                cout << "*";
                if (j != i) {
                    for (int s = 1; s <= i - 1; s++) cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
