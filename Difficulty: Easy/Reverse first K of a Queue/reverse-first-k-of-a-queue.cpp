class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> st;

        int n = q.size();  // store original size
        if (k > q.size()) return q;
        // Step 1: Push first k elements into stack
        for (int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }

        // Step 2: Enqueue stack elements (they're reversed)
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Step 3: Move the remaining (n - k) elements to the back
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
