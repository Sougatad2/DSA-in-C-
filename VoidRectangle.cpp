#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no : ";
    cin >> n;

 
    for (int i = 1; i <= 2*n; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i = n-1; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
      
        for (int j = 1; j <= 2*(n - i) - 1; j++) {
            cout << " ";
        }
      
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 2; i <= n-1; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2*(n - i) - 1; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 2*n; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;
}