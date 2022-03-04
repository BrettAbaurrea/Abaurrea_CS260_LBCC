/*
* testing program for assignment5AutoSort.cpp
* testing is done through user input
* For some reason you aren't able to insert the value '1' into the list more than once
* and if you try to remove a value that isn't there, it just removes the last value in the list
*/

#include <iostream>

#include "assignment5AutoSort.cpp"

using std::cout;
using std::endl;
using std::cin;

int main(){
    int num;
    int continueTest = 1;

    //Create and Print list
    AutoSorter *autoSortedList = new AutoSorter();
    cout << "Current Auto Sorted List:  [ " << autoSortedList -> printScreen() << "]" << endl << endl;

    
    while (continueTest < 4){
        //inserts user entered value and sorts it automatically
        while (continueTest == 1){
        cout << "What value would you like to insert? ";
        cin >> num;
        autoSortedList -> insertValue(num);     //ERROR I for some reason cannot enter '1' more than once
        cout << "insert (" << num <<")\n";
        cout << "Current Auto Sorted List:  [ " << autoSortedList -> printScreen() << "]" << endl << endl;
        cout << "1 to insert more, 2 to remove some, 3 to search, 4 to quit: ";
        cin >> continueTest;
        }
        //remove user entered value IF repeated
        while (continueTest == 2){
            cout << "What value would you like to remove? ";
            cin >> num;
            autoSortedList -> removeFirstInstance(num); //if num isnt in list the program just quits    //ERROR if number isn't on the list it just removes a random value ? im unsure why 
            cout << "remove (" << num <<")\n";
            cout << "Current Auto Sorted List:  [ " << autoSortedList -> printScreen() << "]" << endl << endl;
            cout << "1 to insert more, 2 to remove some, 3 to search, 4 to quit: ";
            cin >> continueTest;
        }
        //search for user entered value
        while (continueTest == 3){
            cout << "What value would you like to search? ";
            cin >> num;
            autoSortedList -> atIndex(num); //if num isnt in list the program just quits    //ERROR if number isn't on the list it just removes a random value ? im unsure why 
            cout << "value (" << num <<") is at index: " << autoSortedList -> atIndex(num) << endl;
            cout << "Current Auto Sorted List:  [ " << autoSortedList -> printScreen() << "]" << endl << endl;
            cout << "1 to insert more, 2 to remove some, 3 to search, 4 to quit: ";
            cin >> continueTest;
        }
    }

    return 0;
}