#include <iostream>

#include "binaryTreeAgeNode.h"

using std::cout;
using std::endl;
using std::cin;

void inOrderTraversal(AgeNode *root){
    if (root == nullptr){   
        return;
    }
    inOrderTraversal(root -> up);
    cout << root -> value << ", ";
    inOrderTraversal(root -> down);
}
void addNode(AgeNode *root){
    if (root == nullptr){
        return "empty";
    }
    else if ()
}

int main(){

    cout << "\nLet's find the average age of a country!\n\n";

    /*
    * Declare AgeNode Values
    */

   //intial age 
   AgeNode *root = new AgeNode{30, nullptr, nullptr};   //average human is 28 (i rounded to 30 bc its prettier)
   //"level" 2
   AgeNode *ageUp = new AgeNode{40, nullptr, nullptr};  //moving up (left) gets you bigger number
   AgeNode *ageDown = new AgeNode{20, nullptr, nullptr};    //movie down (right) gets you a smaller number
   //"level" 3
   AgeNode *ageUpUp = new AgeNode{45, nullptr, nullptr};    //larger than 30 & 40
   AgeNode *ageUpDown = new AgeNode{35, nullptr, nullptr};  //larger than 30 BUT less than 40 
   AgeNode *ageDownDown = new AgeNode{15, nullptr, nullptr};    //less than 30 & 20
   AgeNode *ageDownUp = new AgeNode{25, nullptr, nullptr};  //less than 30 BUT larger than 20
   //"level" 4
   //up
   AgeNode *ageUpUpUp = new AgeNode{48, nullptr, nullptr};  //larger than 30 & 40 & 45
   AgeNode *ageUpUpDown = new AgeNode{43, nullptr, nullptr};    //Larger than 30 & 40 BUT less than 45
   AgeNode *ageUpDownUp = new AgeNode{38, nullptr, nullptr};    //larger than 30 BUT less than 40 BUT larger than 35
   AgeNode *ageUpDownDown = new AgeNode{33, nullptr, nullptr};  //larger than 30 BUT less than 40 & 35
   //down
   AgeNode *ageDownDownDown = new AgeNode{14, nullptr, nullptr};    //less than 30 & 20 & 15
   AgeNode *ageDownDownUp = new AgeNode {18, nullptr, nullptr}; //less than 30 & 20 BUT larger than 15
   AgeNode *ageDownUpDown = new AgeNode {23, nullptr, nullptr}; //less than 30 & 25 BUT larger than 20
   AgeNode *ageDownUpUp = new AgeNode {28, nullptr, nullptr};   //less than 30 BUT larger than 25 & 20

   //Make nodes do the right thing
   //lv2
   root->up = ageUp;
   root->down = ageDown;
   //lv3
   //node goes up
   ageUp->up = ageUpUp;
   ageDown->up = ageDownUp;
   //node goes down
   ageUp->down = ageUpDown;
   ageDown->down = ageDownDown;
   //lv4
   //node goes up
   ageUpUp->up = ageUpUpUp;
   ageUpDown->up = ageUpDownUp;
   ageDownUp->up = ageDownUpUp;
   ageDownDown->up = ageDownDownUp;
   //node goes down
   ageUpUp->down = ageUpUpDown;
   ageUpDown->down = ageUpDownDown;
   ageDownDown->down = ageDownDownDown;
   ageDownUp->down = ageDownUpDown;


//    //test to verify it all works
//    cout << "avereage age (root) = " << root->value << endl;
//    //lv2
//    cout << "ageUp = " << root->up->value << endl;
//    cout << "ageDown = " << root->down->value << endl;
//    //lv3
//    cout << "ageUpUp = " << root->up->up->value << endl;
//    cout << "ageUpDown = " << root->up->down->value << endl;
//    cout << "ageDownUp = " << root->down->up->value << endl;
//    cout << "ageDownDown = " << root->down->down->value << endl;
//    //lv4
//    //up
//    cout << "ageUpUpUp = " << root->up->up->up->value << endl;
//    cout << "ageUpUpDown = " << root->up->up->down->value << endl;
//    cout << "ageUpDownUp = " << root->up->down->up->value << endl;
//    cout << "ageUpDownDown = " << root->up->down->down->value << endl;
//    //down
//    cout << "ageDownDownDown = " << root->down->down->down->value << endl;
//    cout << "ageDownDownUp = " << root->down->down->up->value << endl;
//    cout << "ageDownUpDown = " << root->down->up->down->value << endl;
//    cout << "ageDownUpUp = " << root->down->up->up->value << endl;

    cout << "Ages in order from oldest to youngest:\n";
    inOrderTraversal(root);
    cout << endl;
    
    return 0;
}