class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int a : asteroids) {
            bool destroyed = false;

            while (!st.empty() && st.back() > 0 && !destroyed && a < 0) {
                if (abs(st.back()) < abs(a)) {
                    st.pop_back();          // stack asteroid explodes 
                }
                else if (abs(st.back()) == abs(a)) {
                    st.pop_back();          // both explode
                    destroyed = true;
                }
                else{
                    destroyed = true;
                }
            }

            if (!destroyed) {
                st.push_back(a);
            }
        }
        return st;
    }
};
