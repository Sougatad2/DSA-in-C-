#include <iostream>
#include <algorithm> // For __gcd function

using namespace std;

int main() {
    int num1, den1, num2, den2;

    // Taking input from user
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> num1 >> den1;
    cout << "Enter numerator and denominator of second fraction: ";
    cin >> num2 >> den2;

    // Check if denominator is zero
    if (den1 == 0 || den2 == 0) {
        cout << "Denominator cannot be zero!" << endl;
        return 1; // Exit with error
    }

    // Compute sum of fractions
    int common_denominator = den1 * den2;
    int sum_numerator = (num1 * den2) + (num2 * den1);

    // Simplify the fraction using GCD
    int gcd = __gcd(sum_numerator, common_denominator);
    sum_numerator /= gcd;
    common_denominator /= gcd;

    // Display the result
    cout << "The sum of the fractions is: " << sum_numerator << "/" << common_denominator << endl;

    return 0;
}
