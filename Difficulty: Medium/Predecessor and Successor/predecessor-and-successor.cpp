/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void inorder(Node* root,vector<Node*>&ans)
  {
      if(root==NULL)
      {
          return;
      }
      inorder(root->left,ans);
      ans.push_back(root);
      inorder(root->right,ans);
      
  }
  
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        vector<Node*>ans;
        Node* pre =NULL;
        Node* succ =NULL;
        inorder(root,ans);
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]->data<key)
            {
               pre = ans[i];
            }
            if(ans[i]->data>key)
            {
               succ = ans[i];
               break;
            }
        }
         return {pre,succ};
    }
};