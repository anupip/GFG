//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    void solve(stack<int>& st, int size, int count){
        if(count==size/2){
            st.pop();
            return;
        }
        int val=st.top();
        st.pop();
        solve(st, size,count+1);
        st.push(val);
        
    }
  
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& st) {
        int size= st.size();
        int count =0;
        solve(st, size, count);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends