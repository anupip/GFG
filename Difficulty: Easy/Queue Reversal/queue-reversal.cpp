// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int>st;
        while(!q.empty()){
            int val=q.front();
            q.pop();
            st.push(val);
        }
        while(!st.empty()){
            int ele=st.top();
            st.pop();
            q.push(ele);
            
        }
        return q;
    }
};