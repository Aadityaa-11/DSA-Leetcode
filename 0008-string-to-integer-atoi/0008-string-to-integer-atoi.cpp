class Solution {
public:
//     int myAtoi(string s) {

//         int num = 0 , i = 0 , sign = 1;
           
        //    1. skipping leadin spaces 
//         while(s[i] == ' '){
//             i++;
//         }
           
           // 2. check sign
//         if(i<s.size() && (s[i] == '+' || s[i] == '-')){
//             sign = s[i] == '+' ? 1 : -1;
//             ++i;
//         }

            // 3. process digit and check overflow 
//         while( i < s.size() && isdigit(s[i])){
//             if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] > '7')){
//                 return sign == -1 ? INT_MIN : INT_MAX;
//             }
//             num = num * 10 + (s[i] - '0');
//             ++i;
//         }
//         return num*sign;

//         // if we trying this using single for loop then it doesnot tackle sign and spaces after leading position
//     }


int myAtoi(string s) {

    int n = s.size();
    bool flag = false;
    int sign = 1;
    long num = 0;

    for(auto ch : s ){
        if(ch == ' ' && flag == false) continue;
        else if(ch  == '+' && flag == false){
            sign = 1;
            flag = true;
        }
        else if(ch == '-' && flag == false){
            sign = -1;
            flag = true;
        }
        else if(isdigit(ch)){
            flag = true;
            // if(num > INT_MAX/10 || (num == INT_MAX/10 && ch > '7')){
            //     return sign == -1 ? INT_MIN : INT_MAX;
            // }
            num = num * 10 + (ch - '0');

            // check overflow
            if (sign == 1 && num > INT_MAX) return INT_MAX;
            if (sign == -1 && -num < INT_MIN) return INT_MIN;
        }
        else{
            break;
        }     
    }
    return num*sign;





// ================================================================

    // int i = 0, n = s.size();
    // long num = 0; // use long to check overflow
    // int sign = 1;

    // // 1. Skip leading spaces
    // while (i < n && s[i] == ' ') i++;

    // // 2. Check sign
    // if (i < n && (s[i] == '+' || s[i] == '-')) {
    //     sign = (s[i] == '-') ? -1 : 1;
    //     i++;
    // }

    // // 3. Process digits
    // while (i < n && isdigit(s[i])) {
    //     num = num * 10 + (s[i] - '0');

    //     // 4. Check overflow
    //     if (num * sign >= INT_MAX) return INT_MAX;
    //     if (num * sign <= INT_MIN) return INT_MIN;
    //     i++;
    // }

    // return (int)(num * sign);
  }
};