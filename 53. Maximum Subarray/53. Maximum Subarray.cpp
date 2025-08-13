class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int currSum = 0;
        int maxSum = INT_MIN;

        // int maxSum = nums[0];
        
        for(int i = 0; i<n ; i++){
            // currSum = max(nums[i] , currSum + nums[i]);
            currSum += nums[i];
            maxSum = max(maxSum, currSum);

            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};
