class Solution {
public:
    bool isPalindrome(string sub)
    {
        int i = 0;
        int j = sub.size()-1;
        while(i<j){
            if(sub[i] == sub[j]){
                i++;
                j--;
            }
            else 
                return false;
        }
        return true;
   
    }
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
       

        for(int i = 0 ; i<n ; i++){
            for(int j = i ; j<n ; j++){

                string sub = s.substr(i , j-i+1 ); // extracting the substring
                if(isPalindrome(sub)){
                    count++;
                }
            }
        }
        return count;
   
    }
};

// its optimal version solution can be done by dynamic programming 
