class Solution {
public:
    int brute_force(vector<int>& nums){
        vector<int> temp;

        for(auto x : nums){
            if(temp.empty() || temp.back() != x){
                temp.push_back(x);
            }
        }

        for(int i = 0 ; i<temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();

    }

    int brute_force1(vector<int>& nums){
        
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i] == nums[i-1]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
    int removeDuplicates(vector<int>& nums) { 

        // int ans = brute_force(nums);
        // return ans;

        return brute_force1(nums);

        // // TWO POINTER APPROACH 
        // int j = 0; // j is the unique elements first element of array is unique 
        // // so i start from 1

        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] != nums[j]){
        //          // different wala case
        //         // pahele j ko aage badao phir different element that lie on i index put on j index
        //         j++;
        //         nums[j] = nums[i];
        //     }
        
        // }

        // // j is index of unique (0-based indexing)
        // // int k = j+1;
        // // return k;
        // return j+1;
    }
};
