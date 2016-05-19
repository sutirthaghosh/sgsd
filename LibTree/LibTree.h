#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#define LEFT 0
#define RIGHT 1
class TreeNode{
public:
    int id;
public:
    TreeNode *left;
    TreeNode *right;
    TreeNode(int temp=0){id=temp;left=NULL;right=NULL;}
};
class Tree{
    TreeNode *root;
    //postion 0 means left position 1 means right
public:
    Tree(){root=NULL;}
    TreeNode* insert(int id,TreeNode *parent=NULL,int position=-1);
    void print();
    void printS();
    int kdistance(TreeNode* root,int id,int k);
    int deletenode(int id);
    
};