class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;

        while(start <= end){
            if(nums[start] <= nums[end]) return nums[start];

            int mid= start + (end - start)/2;

            if(mid>0 && nums[mid] < nums[mid-1]) return nums[mid];

            if(nums[start] > nums[mid]) end = mid -1;
            else
              start = mid + 1;

            // if(nums[start] <= nums[mid]) start = mid + 1;
            // else
            //   end = mid - 1;
        }
        return -1;
    }
};

--------------------------------------------------------------------------------------------

    // C++ program to find minimum element in a 
// sorted and rotated array using binary search

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &arr) {
    int lo = 0, hi = arr.size() - 1;

    while (lo < hi) {
      
        // The current subarray is already sorted, 
        // the minimum is at the low index
        if (arr[lo] < arr[hi])        
            return arr[lo];
           
        // We reach here when we have at least
        // two elements and the current subarray
        // is rotated
      
        int mid = (lo + hi) / 2;

        // The right half is not sorted. So 
        // the minimum element must be in the
        // right half.
        if (arr[mid] > arr[hi])
            lo = mid + 1;
      
        // The right half is sorted. Note that in 
        // this case, we do not change high to mid - 1
        // but keep it to mid. As the mid element
        // itself can be the smallest
        else
            hi = mid;
    }

    return arr[lo]; 
}

int main() {
    vector<int> arr = {5, 6, 1, 2, 3, 4};
    cout << findMin(arr) << endl;
    return 0;
}
