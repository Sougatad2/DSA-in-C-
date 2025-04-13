#include <iostream>
using namespace std;
int main(){

    int x;
    cout << "Enter an integer: ";
    cin >> x;

    cout << "Using post-increment (x++): " << x++ << endl;  // Prints current x, then increases it
    cout << "Using pre-increment (++x): " << ++x << endl;  // Increases x, then prints it

    return 0;
    
}
