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
    int i = 1;
    char quit;

    cout << "how many marbles do you have? ";
    cin >> hand;
    //cout << "You have " << hand << " marbles!\n";
    do{

        cout << "There are currently " << bag << " marbles in the bag.\n\nHow many would you like to add? ";
        cin >> addMarbles;
        //i++;
        if(addMarbles > hand){
            cout << "\nSorry you don't have enough marbles\n";
        }
        else{
            bag = bag + addMarbles;
            hand = hand - addMarbles;
        }
        cout << "\nYou have " << hand << " marbles left.\n";
        if (hand == 0){
            cout << "Since you're out of marbles would you like to quit? Y/N  ";
            cin >> quit;
            if (quit == 'y' || quit == 'Y'){
                i = 2;
            }
        }
    }while(i==1);
    

    return 0;
}