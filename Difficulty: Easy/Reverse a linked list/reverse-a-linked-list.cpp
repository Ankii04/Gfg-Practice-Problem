/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* prev = NULL;
        while(head)
        {
            Node *next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};