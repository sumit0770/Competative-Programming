class Solution {
public:
    int minRotations(string s) {
        int cur = 0; 
        int ans =0;
        for( auto it : s ){
            int num = it -'0'; 
            int diff = abs( cur - num ) ;
            ans += min( diff , 10 - diff)  ;
            cur = num;
        }
        return ans  ;
    }
};