/*
* Based off of a tutorial from:
* https://www.delftstack.com/howto/cpp/binary-tree-insert-in-cpp/
*/

#include <iostream>

using std::cout;
using std::endl;

using std::cin;

struct TreeNode{
    int val;
    TreeNode *up;
    TreeNode *down;
};

void insertNode(TreeNode *&root, int count){    
    if (root == nullptr){   
        root = new TreeNode;    
        root->val = count;  
        root->up = nullptr;
        root->down = nullptr;
    }
    else{
        if (count < root->val){ 
            insertNode(root->up, count);  
        }
        else{
            insertNode(root->down, count); 
        }
    }
}

void printTree(TreeNode *root){
    if (root == nullptr){   
        return;
    }
    printTree(root -> up);
    cout << root -> val << ", ";
    printTree(root -> down);
}

int main(){
    
    int v1[10];

    cout << "type: ";
    for (int i = 0; i < 10; i++){
        cin >> v1[i];
        
    }

    TreeNode *root = nullptr;

    for (int i; i < 10; i++){
        insertNode(root, v1[i]);
    }
    printTree(root);
    cout << endl;

    return 0;
}