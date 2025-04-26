#include <iostream>
using namespace std;
int main(){
    int heads, legs;
    
    cout << "Enter total number of heads: ";
    cin >> heads;
    cout << "Enter total number of legs: ";
    cin >> legs;
    
    int dogs = (legs - 2 * heads) / 2;
    int chickens = heads - dogs;

    if (dogs >= 0 && chickens >= 0 && (dogs * 4 + chickens * 2 == legs)) {
        cout << "Dogs -> " << dogs << "  Chickens -> " << chickens << endl;
    } else {
        cout << "Invalid input! No valid solution." << endl;
    }
    
    return 0;
}
