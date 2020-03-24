/**
**********************************************************************************************************************************************************************************************************************************
* @file:    sherlock_and_beast.cpp
* @author:    saket
* @date:    2020年03月18日 23:33:24 Wednesday
* @brief:    hacker-rank
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
    vector<string> vec ;
// string s1 ;
// bool f=false ;
string find(int n,int sum ,string s, int p){
    if(n < sum ) return "" ;
    if(p == 1) return "";
    if(n == sum ){
            // vec.push_back(s);
            vec[0]=s ;
        return vec[0] ;
    }   
    else{
        string c ;
            c = find(n,sum+3, s+"555", p ) + find(n,sum+5, s+"33333", p  ) ;
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

    // cout <<pq .length() << "  ";
    int a=0, b=0, d=0 ;
    string c="" ;
    vec.push_back("asd");
    if(n%3 == 0){
        a = n/3 ;
        loop(0,a,i) cout << "555" ;
        cout << endl ;
    }
    else{
        while(n > 30){
            n -= 3 ;
            a += 1  ;
        }
        int sum = 0 ;
        int p=0;
            string s="" ;
            c = find( n, sum+3, s+"555",p ) + find( n, sum+5, s+"33333",p ) ;
        // cout << " ## "<< vec[0] << " ## ";
    if(vec[0] != "asd"){
        loop(0,a,j) cout << "555" ;
        cout << vec[0] << endl;
    }
    else cout << -1 << endl ;
    }
    vec.erase(vec.begin());
    }  
}