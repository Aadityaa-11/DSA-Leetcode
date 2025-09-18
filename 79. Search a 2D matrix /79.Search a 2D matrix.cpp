class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int n = row * col;
        int s = 0;
        int e = n - 1;
        
        while(s<=e){
            int mid = s + (e-s)/2;

            int rowindex = mid/col;
            int colindex = mid %col;
        
            int currentelement = matrix[rowindex][colindex];

            if(currentelement == target){
                return true;
            }
            if(currentelement < target){
                //right me jao
                s = mid + 1;
            }
            else {
                //left me jao
                e  = mid - 1;
            }
            // int mid = s + (e-s)/2;
            
        }    
        return false;
    }
};
