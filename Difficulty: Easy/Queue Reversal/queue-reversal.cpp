class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int>s;
        while(q.size())
        {
            s.push(q.front());
            q.pop();
        }
        
        while(s.size())
        {
            q.push(s.top());
            s.pop();
        }
        
    }
};