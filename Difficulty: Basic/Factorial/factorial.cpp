class Solution {
  public:
    int factorial(int n) {
        // code here
        int ans;
        if(n==0){
            return 1;
        }
        ans=factorial(n-1);
        int real=n*ans;
        
        return real;
    }
};