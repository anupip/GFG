// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>ans;
        if(node==nullptr) return ans;
        stack<Node*>st1,st2;
        st1.push(node);
        while(!st1.empty()){
            Node* root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=nullptr) st1.push(root->left);
            if(root->right!=nullptr) st1.push(root->right);
        }
        while(!st2.empty()){
            Node* a=st2.top();
            st2.pop();
            ans.push_back(a->data);
        }
        return ans;
    }
};