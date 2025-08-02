// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        if(root==nullptr) return ans;
        stack<Node*>st;
        st.push(root);
        while(!st.empty()){
            Node* curr=st.top();
            st.pop();
            ans.push_back(curr->data);
            if (curr->right != nullptr)
                st.push(curr->right);
            if (curr->left != nullptr)
                st.push(curr->left);
            
        }
        return ans;
    }
};