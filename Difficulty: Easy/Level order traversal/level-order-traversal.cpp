/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* current = q.front();
                q.pop();

                level.push_back(current->data);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};