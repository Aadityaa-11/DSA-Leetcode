class Solution {
public:

    int bruteForce_sol(vector<int>&nums){
        sort(nums.begin() , nums.end());
        for(int i =0; i<nums.size(); i++){
            if(i == nums[i])continue;
            else 
            return i;
        }
        return nums.size();
    }

    // int optimal_sol1(vector<int>&nums){
    //     int ans=0 ;
        
    //     for(int i =0; i<nums.size(); i++){
    //         ans =  ans ^ nums[i];
    //     }

    //     for(int i =0; i<=nums.size(); i++){
    //         ans =  ans ^ i;
    //     }
    //     return ans;
    // }

    int missingNumber(vector<int>& nums) {

     return bruteForce_sol(nums);
    // return optimal_sol1(nums);

        // int sum = 0;
        // int n = nums.size();
        
        // for(int index=0;index<n; index++) {
        //     sum = sum + nums[index];
        // }
        // int totalsum = 0;
        // for(int index = 0 ; index<=n ; index++){
        //     totalsum += index;
        // }
        // // cout<< sum << "=> "<< totalsum;

        // // int totalSum = ((n)*(n+1))/2;
        // int ans = totalsum - sum;
        // return ans;
    }
};