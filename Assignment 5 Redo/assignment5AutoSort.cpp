/*
* I belive this is pretty much what we did in classs
*/

#include <iostream>
#include <string>

#include "node.cpp"

using std::string;
using std::to_string;

class AutoSorter{
    private:
        Node *front;    //initialized front of the list

        Node *findPrevious(int findValue){
            Node *futureSpot = front -> next;   //Makes the "future" spot the next position next to the front
            Node *currentSpot = front;  //ensures the current spot is the front position
            while (futureSpot != nullptr && findValue > futureSpot -> value){
                currentSpot = futureSpot;   //when future spot is occupied, make that the current spot
                futureSpot = futureSpot -> next;    //make the spot next to futureSpot the 'new' futureSpot
            }
            return currentSpot; //display the value in currentSpot to user
        }
    public:
        AutoSorter(){
            front = nullptr;    //start with an empty list
        }

        //insert a new value at a specific position
        void insertValue(int newValue){
            //empty list case
            if (front == nullptr){
                Node *newNode = new Node{newValue, nullptr};
                front = newNode;    //make front the new value
            }
            //before list
            else if (front != nullptr && newValue < front -> value){    //if front IS occupied AND newValue < the value at front do this
                Node *newNode = new Node{newValue, front};
                front = newNode;
            }
            //middlie of list case
            else if (newValue > front -> value){    //if newValue is GREATER than the value at front, do this
                Node *previousSpot = findPrevious(newValue);
                Node *newNode = new Node{newValue, previousSpot -> next};
                previousSpot -> next = newNode; //make the previousSpot the new value
            }
        }
        string printScreen(){
            string result = "";

            Node *current = front;
            while(current != nullptr){
                result = result + "" + to_string(current->value) + ", ";
                current = current -> next;
            }
            return result;  //Display result on screen for user
        }
};