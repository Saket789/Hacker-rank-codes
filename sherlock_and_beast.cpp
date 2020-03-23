/**
**********************************************************************************************************************************************************************************************************************************
* @file:	sherlock_and_beast.cpp
* @author:	saket
* @date:	2020年03月18日 23:33:24 Wednesday
* @brief:	hacker-rank
**********************************************************************************************************************************************************************************************************************************
**/

//  Important for me

#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
#define pb push_back
#define mk make_pair
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 
string s1 ;
bool f=false ;
int find(int n,int sum ,string s, int p){
    if(n < sum ) return 0 ;
    if(p == 1) return ;
    if(n == sum ){
        if(!f){
            // f=true ;
            p = 1 ; 
             s1=s ;
        }
        // cout << s << " " ;
        return 1 ;
    }   
    else{
        ll c=0 ;
        // string s ;
        // loop(0,2,k){
            c = find(n,sum+3, s+"555", p ) + find(n,sum+5, s+"33333", p ) ;
        // } 
        return c ;
    }
}

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){
    int n ;
    cin >> n ;
    int a=0, b=0, c=0, d=0 ;
    
    if(n%3 == 0){
        a = n/3 ;
    }
    else{
        while(n > 30){
            n -= 15 ;
            a += 3  ;
        }
        int sum = 0 ;
        int p=0;
            string s="" ;
            c = find( n, sum+3, s+"555",p ) + find( n, sum+5, s+"33333",p ) ;
        // }
    }
    if(f){
    loop(0,a,i) cout << "555" ;
         cout << s1 ;
    }
    else cout << -1 << endl ;
    }
}