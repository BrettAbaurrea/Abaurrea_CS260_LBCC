/* **************************************
 * This is basically a direct copy from *
 * what we did in class on Friday       *
 * I am slowly starting to understand   *
 * these concepts but I'm not fully     *
 * grasping it to the point that I can  *
 * successfully create my own project   *
 * ************************************ */

#include <string>
#include "nodeStruct.cpp"

using std::string;
using std::to_string;

//Auto Sorted List
class AutoSort{
    private:
        //Creates front (start) position of node
        Node *front;

        //Wanting to look at item in list that came before
        Node *findPrevItem(int value){
            Node *future = front->next;
            Node *current = front;
            while(future != nullptr && value > future->value){
                current = future;
                future = future->next;
            }
            return current;
        }
    
    public:
        //Constructor
        AutoSort(){
            //Set front of "list" to nothing to start
            front = nullptr;
        }
        //Add a value
        void add(int newValue){
            //Insert value when empty
            if (front==nullptr){
                //put value into front position
                Node * newNode = new Node{newValue, nullptr};
                front = newNode;
            }
            //Insert value BEFORE front position
            else if (newValue < front->value){  //if position is less than current position
                Node * newNode = new Node{newValue, nullptr};
                front = newNode;
            }
            //Insert value into middle of list
            else if (newValue >= front->value){
                //Go to next available position to enter newValue
                Node *previous = findPrevItem(newValue);
                //Now insert that (new)value
                Node *newNode = new Node{newValue, previous->next};
                previous->next = newNode;
            }
            
        }
        //Remove from list
        int remove(int oldValue){
            int currentValue = -1;

            //If list is empty do nothing (return -2 which means empty list)
            if(front == nullptr){
                currentValue = -2;
            }
            //If the current position is a value, delete it
            else if(front->value == oldValue){
                Node * current = front;
                currentValue = current->value;
                front = front->next;
                delete current;
            }
            else{
                Node *previous = findPrevItem(oldValue);
                Node *current = previous->next;
                delete current;
            }
            return currentValue;
        }

        string printScreen(){
            string result = "";

            Node *current = front;
            while (current != nullptr){
                result = result + to_string(current->value) + ", ";
                current = current->next;
            }
            //Output list sorted
            return result;
        }
};