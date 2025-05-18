//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Push opening bracket and operators
            if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                st.push(ch);
            }

            // On closing bracket ')'
            else if (ch == ')') {
                bool redundant = true;

                // Pop until opening bracket is found
                while (!st.empty() && st.top() != '(') {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        redundant = false;
                    }
                    st.pop();
                }

                // Pop the opening bracket '('
                if (!st.empty()) {
                    st.pop();
                }

                // If no operator was found, it's redundant
                if (redundant) {
                    return true;
                }
            }
        }

        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.checkRedundancy(s);

        cout << res << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends