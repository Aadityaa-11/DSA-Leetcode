class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        // int candidate = 0; 
        // int count = 0;

        // for(int i = 0 ; i<n ; i++){
        //     if(count == 0){
        //         candidate = nums[i];
        //     }
        //     if(candidate == nums[i]){
        //          count++;
        //     }
        //     else{
        //         count--;
        //     }
            
        // }
        // return candidate;

          // moore's voting algorithm
        // int freq = 0,ans=0;

        // for(int i=0; i<n ; i++){
        //     if(freq == 0){
        //         ans = nums[i];
        //     }
        //     if(ans == nums[i]){
        //         freq++;
        //     }else{
        //         freq--;
        //     }
        // }

// ===================== optimal solution =====================================
        //sort
        // sort(nums.begin(),nums.end());

        // //frequency count
        // int freq =1 , ans=nums[0];
        // for(int i = 1; i<n; i++ ){
        //     if(nums[i] == nums[i-1]){
        //         freq++;
        //         if(freq > n/2) return ans;
        //     }
        //     else{
        //         freq=1;
        //         ans = nums[i];
        //     }     
        // }
        // return ans;

//=================== brute force method ==============================================

        // for(int val:nums){
        //     int freq=0;
        //     for(int el : nums){
        //         if(val == el){
        //             freq++;
        //         }
        //     }
        //     if(freq > n/2){
        //         return val;
        //     }
        // }
        
        // return -1;
    
    }
};
