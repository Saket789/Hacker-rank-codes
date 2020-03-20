/**
**********************************************************************************************************************************************************************************************************************************
* @file:	lonely_integer.cpp
* @author:	Saket
* @date:	2020年03月19日 17:51:06 Thursday
* @brief:	hacker-rank
**********************************************************************************************************************************************************************************************************************************
**/     
//  completed

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
    int n ;
    cin >> n ;
    ll arr[n] ;
    ll a = 0 ;
    loop(0,n,i){
        cin >> arr[i] ;
        a ^= arr[i] ;
    }
    cout << a << endl ;
}