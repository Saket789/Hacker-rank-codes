/**
**********************************************************************************************************************************************************************************************************************************
* @file:	jim_and_order.cpp
* @author:	saket
* @date:	2020年03月19日 00:14:08 Thursday
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
    int n ;
    cin >> n ;
    // int arr[n] ;
    // loop(0,n,i) cin >> arr[i] ;
    vector<pair<int,int> > vec ;
    vector<pair<int,int> >::iterator itr ;
    int a, b, c ,d ;
    loop(0,n,i){
        cin >> a >> b ;
        c = a+b ;
        vec.pb(mk(c,i+1));
    }

    sort(vec.begin(), vec.end()) ;
    itr = vec.begin() ;

    while(itr != vec.end()){
        cout << itr->second << " " ;
        itr++ ;    
    }
   
}