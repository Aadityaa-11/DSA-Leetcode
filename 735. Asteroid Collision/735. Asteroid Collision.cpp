class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(auto num : asteroids){
            bool alive = true;
            
            while(!st.empty() && alive && num < 0 && st.back()>0){

                if( st.back() < -num){
                    // destroy the front 
                    st.pop_back();
                }
                else if ( st.back() == -num){
                    st.pop_back();
                    alive = false;  // stack top and num destroy , iteration badhana padega
                }
                else{
                    // num destroy , iteration badhao
                    alive = false;
                }

            }
            if(alive) st.push_back(num);
        }
        
        return st;
    }
};
