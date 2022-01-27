#include <iostream>

using std:: cout;
using std:: endl;
using std:: cin;

//initialize
struct Queue{
    int value;
    Queue *next;
};

//First in queue is nothing. End of queue gets initialized as first
Queue *head = nullptr;
Queue *tail = head;
Queue *temp;    //Temporary placeholder

void enqueue(int val){

    for (int i = 0; i < val; ++i){
        if (head == nullptr){   //if head is empy do this
            
            Queue *newItem = new Queue{i, nullptr};   //Add new item in queue
            head = newItem;
            tail = newItem;
        }
        else{
            Queue newItem{i, nullptr};
            tail->next = &newItem;
            tail = &newItem;
        }

        Queue *currentItem = head;
        while (currentItem != nullptr){
            cout << "Current Value: " << currentItem->value << endl;
        }
    }
}

void dequeue(int val){

    for (int i = 0; i < val; ++i){
        if (head == nullptr){
            cout << "Unfortunately there are no items to remove";
            return;
        }
        else{

        }
    }

}

int main(){

    int val = 3; 

    //Add items to queue
    cout << "how many would you like to enter? ";
    cin >> val;
    enqueue(val);

    //Remove items from queue
    cout << "how many items would you like to remove? ";
    cin >> val;
    dequeue(val);
}