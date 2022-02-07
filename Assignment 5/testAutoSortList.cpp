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
    sortedList->add(22); //Adds 22 into list
    cout << "List with 1 item: " << sortedList->printScreen() << endl;
}