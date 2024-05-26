#include <iostream>
#include <cmath>

using namespace std;

int main () 
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old" << endl;

    string name;
    cout << "Enter your name: ";
    cin.getline(name);
    

    cout << "Hello " << name;
}