//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string reverse(const string& s) {
        // code here
        stack <char>st;
        for(int i =0 ; i<s.size();i++){
        st.push(s[i]);
        }
        
        string reversed = "";
        while(!st.empty()){
            reversed = reversed+ st.top();
            st.pop();
        }
        return reversed;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        Solution sol;
        string input;
        getline(cin, input);
        string reversed = sol.reverse(input);
        cout << reversed << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends