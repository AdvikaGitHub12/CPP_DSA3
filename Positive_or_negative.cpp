// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1 

#include <iostream>
#include <string>
using namespace std;

int main() {
    float a;
    cout << "Please enter a number : ";
    cin >> a;
    if (a > 0){
        cout <<"The number "<< a <<" is positive";
    }else if(a <0){
        cout << "The number "<< a << " is negative";
    }else{
        cout << "The number is zero. ";
    }
    
    return 0;
}

//output
/*
Please enter a number : 12
The number 12 is positive

=== Code Execution Successful===
/*
