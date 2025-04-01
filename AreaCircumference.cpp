#include<iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter the Radius : ";
    cin >> r;

    if(r > 2){
        cout << "The area is greater than the circumference";
    }
    else if (r = 2)
    {
        cout << "The area and circumference are same";
    }
    else{
        cout << "The area is smaller than the circumference";
    }
    
}