#include<iostream>
using namespace std;

int main(){
    int Year;
    cout << "Enter the Year : ";
    cin >> Year;

    if(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0){
        cout << "This is a Leap Year";
    }
    else{
        "The Year is not a leap year";
    }

}