 vector<string> getTrendingMovies(vector<vector<string>>& watchedMovies,
                                      vector<vector<int>>& friends,
                                      int id, int level) {
  int n = watchedMovies.size() ;

  vector<int> dist( n , -1 ) ;
  queue<int> q ; 

  dist[id] = 0; 
  q.push(id) ;

  while( !q.empty()){
    int u = q.front() ;q.pop() ;
    
    for( int v : friend[u] ){
        if(dist[v] == -1){
           dist[v] = dist[u] + 1 ;
           q.push(v) ;
        }   
     }
    
  }

  map<string , int> mp ;

  for( int i = 0; i < n ; i++){
    if( dist[i] == level ){
        for( auto movie : watchedmovie[i])
        {
            mp[movie]++;
        }
    }
  }

  vector<pair< int , string>> v ; 
  for(auto &p : mp ){
    v.push_back({ p.second , p.first}) ;
  }
  sort(v.begin() , v.end()) ;

  vector<string>ans ; 
  for( auto &p : v ){
    ans.push_back(v.second);
  }
  return ans ;

 }


 int findMinimumSubarrays(vector<long long>& arr) {


    int n = arr.size() ;
    stack<int> st; 
    vector<int> dp(n) ;

    for(int i = 0; i < n ; i++){
    while( !st.empty() && arr[st.top() > arr[i]]) {
        st.pop() ;
    }

    if( st.empty()){
        dp[i] = 1 ;
    }
    else{
        dp[i] = dp[st.top()] + 1 ;
    }
    st.push(i) ;
    }
    return dp[n - 1] ;
 }




   int minLength(int n, string s) {
     int l = 0 ;
      int r = n -1 ; 

      while( l < r && s[l] != s[r]){
        l++;
        r--;
      }
      return r- l + 1 ;
   }


    int countSortedVowelStrings(int m) {
        

        vector<long long > dp( 5 , 1) ;

        for(int len = 2 ; len <= m ; len++){
            for(int j = 1; j < 5 ; j++){
                dp[j] += dp[j - 1] ;
            }
        }

        for(auto x : dp) ans+=x ; 
        return ans;
    }



    SELECT name, grade, marks 
    FROM student_details
    WEHRE grade = 'A'
      AND marks BETWEEN 80 AND 90 
    ORDER BY marks DESC