#include <iostream>

using namespace std;

void sayHi(string name, int age);
int main()
{
    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("Steve", 19);
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << ". You are " << age << "." << endl;
}

