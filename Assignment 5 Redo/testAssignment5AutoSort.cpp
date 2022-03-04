#include <iostream>

#include "assignment5AutoSort.cpp"

using std::cout;
using std::endl;
using std::cin;

int main(){
    //Create and Print list
    AutoSorter *autoSortedList = new AutoSorter();
    cout << "Current Auto Sorted List:  [" << autoSortedList -> printScreen() << endl << endl;

    return 0;
}