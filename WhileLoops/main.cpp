#include <iostream>
using namespace std;

int main()
{
    int index = 1;
    while(index <= 5) 
    {
        cout << index << endl;
        index++;
    }

    int index1 = 6;
    do
    {
        cout << index1 << endl;
        index++;
    } while (index1 <= 5);
}
