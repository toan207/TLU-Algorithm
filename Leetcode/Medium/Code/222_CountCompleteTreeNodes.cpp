#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int countNodes(TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main(){
    TreeNode *d = new TreeNode(5);
    TreeNode *e = new TreeNode(4);
    TreeNode *c = new TreeNode(3);
    TreeNode *b = new TreeNode(2,d,e);
    TreeNode *a = new TreeNode(1,b,c);

    cout << countNodes(a);
    return 0;
}