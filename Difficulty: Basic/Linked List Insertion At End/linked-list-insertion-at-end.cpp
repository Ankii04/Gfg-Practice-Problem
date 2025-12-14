/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* n = new Node(x);
        if(!head) return n;
        Node* temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = n;
        return head;
    }
};