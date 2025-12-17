class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        int j = 0; // maintail the index of 0

        for(int i = 0 ; i<n ; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }

        while(j < n){
            nums[j] = 0;
            j++;
        }









        // ======================================================
        
        // int count = 0;

        // for(int i = 0 ; i<nums.size() ; ){

        //     if(nums[i] == 0){
        //         nums.erase(nums.begin() + i);   // 0(k.n)
        //         count++;
        //     }
        //     else{
        //         i++;
        //     }
        // }

        // while(count > 0) {        // 0(k)
        //     nums.push_back(0);
        //     count--;
        // }


        //  tokal 0(k. n + k) = 0(k.n)  
        //  if (k == n) = 0(n2)


    }
};