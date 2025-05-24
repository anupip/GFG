class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        vector<int> result;
        deque<int> dq;

        int n = arr.size();

        // Step 1: Process the first window of size k
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // Add result for the first window
        if (!dq.empty()) {
            result.push_back(arr[dq.front()]);
        } else {
            result.push_back(0);
        }

        // Step 2: Process the remaining windows
        for (int i = k; i < n; i++) {
            // Remove elements which are out of the current window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Add current element if it is negative
            if (arr[i] < 0) {
                dq.push_back(i);
            }

            // Add result for current window
            if (!dq.empty()) {
                result.push_back(arr[dq.front()]);
            } else {
                result.push_back(0);
            }
        }

        return result;
    }
};
