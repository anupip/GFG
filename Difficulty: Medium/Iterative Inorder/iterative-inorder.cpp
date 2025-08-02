// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        stack<Node*>st;
        Node* node=root;
        while(true){
            if(node!=nullptr){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true) break;
                node=st.top();
                st.pop();ans.push_back(node->data);
                node=node->right;
            }
        }
        return ans;
    }
};