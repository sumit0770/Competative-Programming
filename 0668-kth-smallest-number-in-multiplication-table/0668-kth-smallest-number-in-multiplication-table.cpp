class Solution {
public:
  int cnt( int m , int n , int k ){
    int ans= 0; 
    for(int i = 1 ; i <= m ; i++ ) {
        ans+= min( n ,k/i) ;

    }
       return ans ; 
  }
    int findKthNumber(int m, int n, int k) {
       int l= 1 ,r = n*m , mid , ans ; 
       while( l <= r ){
        mid = ( l + r )>> 1 ; 
        if( cnt( m , n , mid  )< k){
            l = mid +1 ;
        }
        else{
            r = mid - 1 ;
            ans = mid ;
        }
       } 
       return ans; 
    }
};