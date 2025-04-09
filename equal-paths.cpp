#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
bool check(Node* root, int depth, int& leaf){
  if(!root) return true; 

  if(!root->left&& !root->right){
    if(leaf == -1){
      leaf = depth; 
      return true; 
    }
    return depth == leaf;
  }
  return check(root->left, depth+1, leaf) && check(root->right, depth+1, leaf);
}


bool equalPaths(Node * root)
{
    int leaf = -1; 
    return check(root, 0, leaf);
    
    
    

}