#include <iostream>

#include "binaryTreeNode.h"

using std::cout;
using std::endl;
using std::cin;

void inOrderTraversal(BinaryNode *root){
    if (root == nullptr){   //if empty do this
        return;
    }
    inOrderTraversal(root -> up);
    cout << root -> value << ", ";
    inOrderTraversal(root -> down);
}

int main(){
    
    BinaryNode *root = new BinaryNode{3, nullptr, nullptr}; //start

    //steps 2 & 3
    BinaryNode *goUp = new BinaryNode{1, nullptr, nullptr};
    BinaryNode *goDown = new BinaryNode{5, nullptr, nullptr};

    //steps 4 & 5
    BinaryNode *goUpUp = new BinaryNode{0, nullptr, nullptr};
    BinaryNode *goUpDown = new BinaryNode{2, nullptr, nullptr};

    //steps 6 & 7
    BinaryNode *goDownDown = new BinaryNode{6, nullptr, nullptr};
    BinaryNode *goDownUp = new BinaryNode{4, nullptr, nullptr};

    root -> up = goUp;
    root -> down = goDown;

    goUp->up = goUpUp;  //when up goes up again, it beceoms upup
    goDown->down = goDownDown;  //when down goes down again, it becomes downdown

    goUp->down = goUpDown;  //when up goes down, it becomes updown
    goDown->up = goDownUp;  //when down goes up, it becomes downup

    
    // //testing proper structure
    // cout << "Root's Value = " << root->value << endl;
    // cout << "Up from Root = " << root->up->value << endl;
    // cout << "Down from Root = " << root->down->value << endl;
    // cout << "Up from Up = " << root->up->up->value << endl;
    // cout << "Down from Up = " << root->up->down->value << endl;
    // cout << "Down from Down = " << root->down->down->value << endl;
    // cout << "Up from Down = " << root->down->up->value << endl;

    inOrderTraversal(root);
    cout << endl;
    
    return 0;
}