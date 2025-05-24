class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        unordered_map<char,int>count;
        queue<char>q;
        string ans="";
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            count[ch]++;
            q.push(ch);
            while (!q.empty() && count[q.front()] > 1) {
                q.pop();
            }
            if (!q.empty()) {
                ans += q.front();
            } else {
                ans += '#';
            }
        }
        return ans;
    }

};