/**
**********************************************************************************************************************************************************************************************************************************
* @file:	the_great_xor.cpp
* @author:	Saket
* @date:	2020年03月19日 23:39:51 Thursday
* @brief:	hacker-rank
**********************************************************************************************************************************************************************************************************************************
**/     // completed

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

int main(){
    fastio ;
    int t ;
    cin >> t ;
    while(t--){

        ll x ;
        cin >> x ;
        ll cnt=0, a=0, c=0, d=0 , ans=0;
        while(x){
            if(!(x&1)){
                 cnt++;
                 c=d;
                ans += pow(2,c) ;
            }
            d++;
            x = x >> 1 ;
        }
        // cout << (ll)pow(2,cnt-1)+(ll)pow(2,c-1) << endl ;
        cout << (ll)ans << endl ;

    }
}