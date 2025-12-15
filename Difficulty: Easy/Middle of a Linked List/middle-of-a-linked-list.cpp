/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // cint getMiddle(Node* head) {
    vector<int> v;
    while(head) {
        v.push_back(head->data);
        head = head->next;
    }
    return v[v.size() / 2];
    }
};