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

using std:: string;

//Auto Sorted List
class AutoSort{
    private:
        //Creates front (start) position of node
        Node *front;
    
    public:
        //Constructor
        AutoSort(){
            //Set front of "list" to nothing to start
            front = nullptr;
        }
}