class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       // unordered_map< int , int > mp ; 
     int cnt5 = 0; 
     int cnt10= 0; 
        // for(auto it : bills ){
        //     mp[it]++;
        // }
        int n = bills.size() ;
        // bool flg = true ;
        for(int i =0; i < n ;i++){
         int it = bills[i] ; 
          if( it == 5 ) cnt5++;
          else if( it == 10  && cnt5 > 0) cnt10++, cnt5--; 
          else if( it == 20 && cnt5 >0 && cnt10 > 0 ) cnt10--, cnt5--; 
          else if( cnt5 >= 3 && it == 20  ) {
            cnt5-= 3 ;
          }
          else {
           return false ;
          }
        
        }
      return true ;

    }
};