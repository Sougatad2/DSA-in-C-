#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "*";

        
        int innerSpace = 2 * (n - i - 1) - 1;
        for(int j = 0; j < innerSpace; j++) {
            cout << " ";
        }

        
        if(i != n - 1) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
