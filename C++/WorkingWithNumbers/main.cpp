#include <iostream>
#include <cmath> 

using namespace std;

int main() 
{
    cout <<  5 + 7 << endl;
    cout << 10 % 3 << endl;
    cout << 10 / 2 << endl;
    int wnum = 5;
    double dnum = 5.5;
    wnum++;

    // part of cmath
    cout << pow(2, 5) << endl; // first number is base, second is exponent
    cout << sqrt(36) << endl; 
    cout << round(4.3) << endl; // follows normal rounding
    cout << ceil(4.1) << endl; // always rounds up to next highest int
    cout << floor(4.1) << endl; // always rounds down
    cout << fmax(4, 10) << endl; // returns larger number
    cout << fmin(3, 19) << endl; // returns smaller number
}