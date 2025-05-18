//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  void bottom(stack<int>& st, int val){
      if(st.empty()){
          st.push(val);
            return;
        }
        int num= st.top();
        st.pop();
        bottom( st, val);
        st.push(num);
        
  }
        
    void Reverse(stack<int> &st) {
        if(st.empty()){
            return;
        }
        int val= st.top();
        st.pop();
        Reverse(st);
        bottom(st, val);
        
    }
};


//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends