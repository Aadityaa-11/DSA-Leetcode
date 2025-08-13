class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        char prev = chars[0];
        int count = 1;

        for(int i = 1; i<n ; i++){
            
            if(chars[i] == prev){
                count++;
            }
            else{
                // write the previous char
                chars[index++] = prev;
                
                // write the count if > 1
                if(count > 1){
                    int start = index;
                    while(count){
                        chars[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(chars.begin()+start , chars.begin()+index);
                }
            // Reset for new char 
            prev = chars[i];
            count = 1;  
            }           
        }
       

        // handling last case (sequence)
        chars[index++] = prev;
        if(count > 1){
            int start = index;
                while(count){
                    chars[index++] = (count % 10) + '0';
                     count /= 10;
                }
            reverse(chars.begin()+start , chars.begin()+index);
        } 

        return index;
    }
};
