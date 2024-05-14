#include <iostream>
#include <vector>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> leafs1 , leafs2;

        treeLeafs(root1 , leafs1);
        treeLeafs(root2 , leafs2);

        return leafs1 == leafs2;
        
        
    }

    void treeLeafs(TreeNode * root , vector<int> &leafs){
        if(root == nullptr)  return;
        if(root->left == nullptr && root->right == nullptr) leafs.push_back(root->val);

        treeLeafs(root->left,leafs);
        treeLeafs(root->right,leafs);
    }
};