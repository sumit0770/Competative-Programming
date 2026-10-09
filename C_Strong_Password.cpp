#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    while(n){
        fact=fact*n;
        n--;
    }
    cout<<fact<<endl;
    return 0;
}