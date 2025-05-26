class Solution {
  public:
    int startStation(vector<int> &pet, vector<int> &dis) {
        int balance=0;
        int start=0;
        int total_petrol=0;
        int total_distance=0;
        for(int i=0;i<pet.size();i++){
            total_petrol+=pet[i];
            total_distance+=dis[i];
            balance += pet[i] - dis[i];

            if(balance<0){
                start=i+1;
                balance=0;
            }
        }
        return (total_petrol >= total_distance) ? start : -1;
    }
};
