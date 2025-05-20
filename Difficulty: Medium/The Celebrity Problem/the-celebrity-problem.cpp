class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> knowme(n, 0);
        vector<int> iknow(n, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && mat[i][j] == 1) {
                    iknow[i]++;
                    knowme[j]++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (iknow[i] == 0 && knowme[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};
