#include <iostream>
#include <string>

//Declares what I need from the library
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int bag = 0;    //How many marbles in the bag
    int hand = 0;   //How many marbles the user has
    int addMarbles = 0;
    int takeMarbels = 0;
    int clear, multi, blue; //Marble options
    int clearTot, multiTot, blueTot;    //Total amount of a specific color in the bag
    int i = 1;  //counter
    int choice;
    char quit;
    
    do{
        cout << "a marble bag sits infront of you...\n";
        cout << "(1)ADD a marble\n(2)TAKE a marble\n(3)OPEN the bag:\t";
        cin >> choice;
        //add marble function
        if (choice == 1){
            do{
                cout << "There are currently " << bag << " marbles in the bag.\n\nAre you adding a clear(1), multi-colored(2) or blue(3) marble? ";
                cin >> choice;
                //Clear Marble Option
                if (choice == 1){
                    cout << "How many CLEAR marbles are you adding to the bag? ";
                    cin >> clear;
                    bag = bag + clear;
                    clearTot = clear + clearTot;
                    cout << "There are " << bag << "  total marbles in the bag now, " << clearTot << " of which are clear.\n";
                    cout << "\nWould you like to add more(1) or go to menu (0)? ";
                    cin >> choice;
                }
            }while(choice==1);
        }

    }while (choice==0);
    return 0;
}