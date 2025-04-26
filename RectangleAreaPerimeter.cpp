#include<iostream>
using namespace std;

int main(){
    int lenth , breadth;
    cout << "Enter the lenth : ";
    cin >> lenth;
    cout << "Enter the breadth : ";
    cin >> breadth;

    if((lenth-2)*(breadth-2) <= 4){
        cout << "Perimeter is greater than or equal to Area";
    }
    else{
        cout << "Area Is greater";
    }
    
}