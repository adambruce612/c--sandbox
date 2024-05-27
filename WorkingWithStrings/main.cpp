#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    cout << phrase << endl;
    cout << phrase.length() << endl; // returns the number of characters in the string
    cout << phrase[0] << endl; // Returns character at the given index
    cout << phrase.find("Academy", 3) << endl; // First argument is what you are looking to find, second argument is the index to start looking at. Returns index of where it starts.
    cout << phrase.substr(8, 3); // returns substring of invoking object. First argument is starting index, second is the length
}