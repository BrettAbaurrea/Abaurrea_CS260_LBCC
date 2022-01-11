#include <iostream>

//Declares what I need from the library
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int bag = 0;
    int hand = 0;
    int addMarbles = 0;

    cout << "how many marbles do you have?";
    cin >> hand;
    cout << "You have " << hand << " marbles!";

    return 0;
}