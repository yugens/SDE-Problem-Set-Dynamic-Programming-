//T.C. O(num*sum) and S.C. O(num*sum)
class Solution {
public:
bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i : nums)
            sum += i;
        if(sum % 2 == 1) return false;
        int n = nums.size();
        
        vector<bool> dp(sum/2 + 1);
        dp[0] = true;
        for(int i : nums){
            for(int j=sum/2; j>=0; j--){
                if(dp[j] && i+j<=sum/2) dp[i+j] = true;   
            }
            if(dp[sum/2]) return true;
        }
        
        return false;
     }
};
