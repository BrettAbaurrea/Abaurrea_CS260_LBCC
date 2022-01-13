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
    int addMarbles = 0;
    int takeMarbels = 0;
    int clear = 0, multi = 0, blue = 0; //Marble options
    int clearTot = 0, multiTot = 0, blueTot = 0;    //Total amount of a specific color in the bag
    int i = 1;  //counter
    int choice;
    
    do{
        
        cout << "\na marble bag sits infront of you...\n";
        cout << "(1)ADD a marble\n(2)TAKE a marble\n(3)OPEN the bag\n(0)QUIT:\t";
        cin >> choice;
        //add marble to bag
        if (choice == 1){
            do{
                cout << "\nThere are currently " << bag << " marbles in the bag.\n\nAre you adding a clear(1), multi-colored(2) or blue(3) marble? ";
                cin >> choice;
                //Clear Marble Option
                if (choice == 1){
                    cout << "How many CLEAR marbles are you adding to the bag? ";
                    cin >> clear;
                    bag = bag + clear;
                    clearTot = clear + clearTot;
                    cout << "\nThere are " << bag << "  total marbles in the bag now, " << clearTot << " of which are clear.\n";
                    cout << "\nWould you like to add more(1) or go to menu (0)? ";
                    cin >> i;
                }
                //Multi-Colored Marble Option
                else if(choice == 2){
                    cout << "How many MULTI-COLORED marbles are you adding to the bag? ";
                    cin >> multi;
                    bag = bag + multi;
                    multiTot = multi + multiTot;
                    cout << "\nThere are " << bag << "  total marbles in the bag now, " << multiTot << " of which are multi-colored.\n";
                    cout << "\nWould you like to add more(1) or go to menu (0)? ";
                    cin >> i;
                }
                //Blue Marble Option
                else if(choice == 3){
                    cout << "How many BLUE  marbles are you adding to the bag? ";
                    cin >> blue;
                    bag = bag + blue;
                    blueTot = blue + blueTot;
                    cout << "\nThere are " << bag << "  total marbles in the bag now, " << blueTot << " of which are blue.\n";
                    cout << "\nWould you like to add more(1) or go to menu (0)? ";
                    cin >> i;
                }
            }while(i==1);
        }
        //Taking marble out of bag
        else if(choice == 2){
            do{
                cout << "\nThere are currently " << bag << " marbles in the bag.\n\nAre you taking a clear(1), multi-colored(2) or blue(3) marble? ";
                cin >> choice;
                //Take clear marble
                if (choice == 1){
                    cout << "\nThere are " << clearTot << " clear marbles. How many would you like? ";
                    cin >> clear;
                    if(clear > clearTot){
                        cout << "\nSorry there's not enough clear marbles.\n";
                        i = 1; 
                    }
                    else{
                        clearTot = clearTot - clear;    //removing amount from clear total
                        bag = bag - clear;  //removing amount from bag total
                        cout << "\nThere are now " << clearTot << " clear marbles in the bag.\n";
                        cout << "\nWould you like to take more(1) or go to menu (0)? ";
                        cin >> i;
                    }
                }
                //Take multi-colored marble
                else if (choice == 2){
                    cout << "\nThere are " << multiTot << " multi-colored marbles. How many would you like? ";
                    cin >> multi;
                    if(multi > multiTot){
                        cout << "\nSorry there's not enough multi-colored marbles.\n";
                        i = 1; 
                    }
                    else{
                        multiTot = multiTot - multi;    //remove amount from multi total
                        bag = bag - multi;  //removing amount from bag total
                        cout << "\nThere are now " << multiTot << " multi-colored marbles in the bag.\n";
                        cout << "\nWould you like to take more(1) or go to menu (0)? ";
                        cin >> i;
                    }
                } 
                //Take out blue marbles
                else if (choice == 3){
                    cout << "\nThere are " << blueTot << " blue marbles. How many would you like? ";
                    cin >> blue;
                    if(blue > blueTot){
                        cout << "\nSorry there's not enough blue marbles.\n";
                        i = 1; //keeps user in take function
                    }
                    else{
                        blueTot = blueTot - blue;   //removing amount from blue total
                        bag = bag - blue;   //removing amount from bag total
                        cout << "\nThere are now " << blueTot << " blue marbles in the bag.\n";
                        cout << "\nWould you like to take more(1) or go to menu (0)? ";
                        cin >> i;
                    }
                }
            }while (i==1);  //take runs until user says stop (0)
        }
        else if(choice == 3){
            do{
            cout << "\nThere are " << bag << " total marbles in the bag.\n";
            cout << clearTot << " are clear, " << multiTot << " are multi-colored, and " << blueTot << " are blue.\n";
            i = 0;  //This makes i zero so user is kicked to menu
            }while (i==1);
        }
    }while (choice > 0);    //anything over 0 will keep displaying the menu (unless 1,2,3 then those are gone to)

    return 0;
}