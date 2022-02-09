/* ************************************** *
 * Testing program for autoSortList.cpp   *
 * ************************************** */

#include <iostream>

#include "autoSortList.cpp"

using std::cout;
using std::endl;

//Testing features of autoSortList.cpp to make sure it all works
int main(){
    //Create List and print
    AutoSort *sortedList = new AutoSort();
    cout << "Created List: " << sortedList->printScreen() << endl;

    //And an item to empty list
    sortedList->add(1); //Adds 1 into an empty list (starts a list)
    cout << "List with 1 item: " << sortedList->printScreen() << endl;

    //Add item to end and print list
    sortedList->add(99); //Adds 99 into end of list
    cout << "List with end item: " << sortedList->printScreen() << endl;

    //add to middle and print list
    sortedList->add(3); //Adds 3 into list
    cout << "List with middle item: " << sortedList->printScreen() << endl;

    //remove middle
    sortedList->remove(3); //removes 3 (since thats the middle value)
    cout << "List with missing middle item: " << sortedList->printScreen() << endl;

    //remove front
    sortedList->remove(1); //removes 1 (since thats the front value)
    cout << "List with missing front item: " << sortedList->printScreen() << endl;

    //remove end
    sortedList->remove(99); //removes 99 (since thats the end value)
    cout << "List with missing end item: " << sortedList->printScreen() << endl;


}