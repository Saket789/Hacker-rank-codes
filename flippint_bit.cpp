/**
**********************************************************************************************************************************************************************************************************************************
* @file:	flippint_bit.cpp
* @author:	Saket
* @date:	2020年03月19日 18:48:52 Thursday
* @brief:	hacker-rank
**********************************************************************************************************************************************************************************************************************************
**/
    // completed

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

        ll n ;
        cin >> n ;
        ll a=1, b=1; 

        loop(1,33,i) a = a*2 ;
        a -= 1 ;

        ll ans = a - n ;
        cout << ans << endl ;

    }
}
