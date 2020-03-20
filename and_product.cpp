/**
**********************************************************************************************************************************************************************************************************************************
* @file:	And_product.cpp
* @author:	Saket
* @date:	2020年03月19日 19:50:04 Thursday
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

        ll a, b, c=(ll)pow(2,32)-1 ;
        cin >>  a >> b ;

        loop(a,b+1,i) c = c & i ;

        cout << c << endl ;

    }
}