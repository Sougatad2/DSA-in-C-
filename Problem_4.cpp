#include <iostream>
using namespace std;

int main() {
    
    double principal, rate, time;

    
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Time (in years): ";
    cin >> time;
    cout << "Enter Rate of Interest (per annum): ";
    cin >> rate;

    
    double simpleInterest = (principal * rate * time) / 100;

    cout << "\nSimple Interest: " << simpleInterest << endl;

    return 0;
}

