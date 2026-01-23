/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    int Height(Node* root,bool &ans)
    {
        if(!root)
        {
            return 0;
        }
        
        int left = Height(root->left,ans);
        int right = Height(root->right,ans);
        
        if(abs(right-left)>1)
        {
            ans = 0;
        }
        
        return 1+max(left,right);
    }
    bool isBalanced(Node* root) {
        // code here
        bool ans = 1;
        Height(root,ans);
        return ans;
        
    }
};