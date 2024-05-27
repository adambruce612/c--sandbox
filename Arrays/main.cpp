#include <iostream>

using namespace std;

int main()
{
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    cout << luckyNums[0] << endl;

    luckyNums[0] = 19;

    cout << luckyNums[0];
}
