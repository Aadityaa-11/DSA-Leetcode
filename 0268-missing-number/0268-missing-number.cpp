class Solution {
public:

    // int bruteForce_sol(vector<int>&nums){
    //     sort(nums.begin() , nums.end());
    //     for(int i =0; i<nums.size(); i++){
    //         if(i == nums[i])continue;
    //         else 
    //         return i;
    //     }
    //     return nums.size();
    // }

    int brute_force2(vector<int>& nums){

        sort(nums.begin() , nums.end());
        int ans = -1;
        int diff = 1;
        int n = nums.size();
        if(nums[0] == 1) return 0;
        for(int i = 1 ; i< n ; i++){
            diff = nums[i] - nums[i-1];
            if(diff != 1) {
                ans = nums[i-1] + 1;
                return ans;
            }
        }

        return nums[n-1] + 1;
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

    //  return bruteForce_sol(nums);
    return brute_force2(nums);
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