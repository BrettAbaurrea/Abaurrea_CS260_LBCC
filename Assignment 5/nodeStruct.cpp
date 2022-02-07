/* ************************************ *
 * This gives us access to a basic node *
 * structure that will be used in my    *
 * sorted list project                  *
 * ************************************ */

#include <iostream>

using std::cout;
using std::endl;

//Declaring the Node
struct Node{
    int value;
    Node *next;
};