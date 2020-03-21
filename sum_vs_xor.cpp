/**
**********************************************************************************************************************************************************************************************************************************
* @file:	sum_vs_xor.cpp
* @author:	Saket
* @date:	2020年03月19日 18:06:11 Thursday
* @brief:	hacker-rank
**********************************************************************************************************************************************************************************************************************************
**/     //      completed

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
    int cnt=0;
    loop(0,n+1,i){
        if(n+i == (n^i)){
            cnt++ ;
        }
    }
    cout << cnt << endl ;
}