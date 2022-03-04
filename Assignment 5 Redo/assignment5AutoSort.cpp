/*
* I belive this is pretty much what we did in classs
* I attempted to use the atIndex function but couldn't get it working correctly
* It just outputs -1 no matter what
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
        void removeFirstInstance(int oldValue){
            int currentValue = -1;

            //remove from an empty list?
            if (front == nullptr){  //if front is empty do this
                currentValue = -2;
            }
            else if (front -> value == oldValue){   //if value at front is the same as oldValue, delete whatever is in the current position
                Node *currentSpot = front;
                currentValue = currentSpot -> value;
                front = front -> next;
                delete currentSpot;
            }
            else{
                Node *previousSpot = findPrevious(oldValue);
                Node *currentSpot = previousSpot -> next;
                int currentValue = currentSpot -> value;
                previousSpot -> next = currentSpot -> next;
                delete currentSpot;
            }
        }
        int atIndex(int valueIndex){
            int count = 0;

            Node *currentSpot = front;

            while (currentSpot == NULL){
                if (count == valueIndex){
                    return currentSpot->value;
                }
                count++;
                currentSpot = currentSpot -> next;
            }
            return -1;
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