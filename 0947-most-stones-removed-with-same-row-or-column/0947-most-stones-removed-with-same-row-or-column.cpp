class Solution {
private: 
 int comp = 0; 
int find( int ele , vector<int>& parray){
    if( parray[ele] == 0 ){
        parray[ele] = ele; 
       comp++ ;
    }
    return parray[ele] == ele? ele : ( parray[ele]= find( parray[ele] , parray ));
}

void merge ( int a , int b ,vector<int> & arr) {
    int pa = find( a , arr ) ; 
    int pb = find( b , arr ) ;
    if( pa != pb ){
        arr[pb]= pa ; 
        comp--;
    }
}
public:
    int removeStones(vector<vector<int>>& stones) {
        vector<int> arr( 20005 , 0 ) ; 
        for(auto &it : stones) {
            merge( it[0] + 1 , it[1] + 10002 , arr ); 
        }
        return stones.size() - comp;
    }
};