#include <iostream>
using namespace std;

int main() {
    int choice;
    double cm, ft, km, miles, usd, inr;
    const double CM_TO_FT = 0.0328084;  
    const double KM_TO_MILES = 0.621371; 
    const double USD_TO_INR = 83.0; 

    do {
        
        cout << "\n--- Conversion Menu ---\n";
        cout << "1. Convert cm to ft\n";
        cout << "2. Convert km to miles\n";
        cout << "3. Convert USD to INR\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter length in cm: ";
                cin >> cm;
                ft = cm * CM_TO_FT;
                cout << cm << " cm = " << ft << " ft\n";
                break;

            case 2:
                cout << "Enter distance in km: ";
                cin >> km;
                miles = km * KM_TO_MILES;
                cout << km << " km = " << miles << " miles\n";
                break;

            case 3:
                cout << "Enter amount in USD: ";
                cin >> usd;
                inr = usd * USD_TO_INR;
                cout << usd << " USD = " << inr << " INR\n";
                break;

            case 4:
                cout << "Exiting the program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Please select a valid option.\n";
        }

    } while (choice != 4);

    return 0;
}
