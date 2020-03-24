/**
**********************************************************************************************************************************************************************************************************************************
* @file:	permuting_two_arrays.cpp
* @author:	Saket Vajpai
* @date:	2020年03月22日 02:36:10 Sunday
* @brief:	Greedy
**********************************************************************************************************************************************************************************************************************************
**/
#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
#define vec vector<int> 
#define pb push_back
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

        vector<int> a, b ;
        vector<int>::iterator itr, itr1 ;
        ll n , k;
        cin >> n >> k ;
        ll c, d ;

        loop(0,n,i){
            cin >> c ;
            a.pb(c);
        } 
        loop(0,n,i){
            cin >> c ;
            b.pb(c);
        } 

        sort(a.begin(), a.end()); 
        sort(b.begin(), b.end()); 
        bool f=true ;

        loop(0,n,i){
            c = k-a[i] ;
            itr = lower_bound(b.begin(), b.end(), c) ; 
            if(itr == b.end()){
                f=false;
                break;
            }
            else{
                b.erase(itr);
            }
        }
        if(f) cout << "YES" << endl ;
        else cout << "NO" << endl ;

    }
}