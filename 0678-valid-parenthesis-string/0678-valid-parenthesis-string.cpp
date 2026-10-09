class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size() ; 
      //  int cnt = 0;
      int l = 0; int m = 0;

      for(auto &it: s ){
        if( it =='(') {
            l++, m++;
        }
        else if( it ==')'){
            l--, m-- ;
        }
        else{
            l--;
            m++;
        }
        if( l < 0 ) l =0;
        if( m < 0 ) return false ;
      }

      return l== 0;
         
    }
};