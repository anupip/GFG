class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        // code here
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        for(auto &it:mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
            
        }
        return -1;
    }
};