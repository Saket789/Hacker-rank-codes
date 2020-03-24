/**
**********************************************************************************************************************************************************************************************************************************
* @file:	candies.cpp
* @author:	Saket Vajpai
* @date:	2020年03月18日 19:36:10 Wednesday
* @brief:	hacker-rank question
**********************************************************************************************************************************************************************************************************************************
**/ // very important queston

#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

int main(){
    fastio ;

    ll i,n,A[100001],B[100001],c,ans;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        B[i]=1;
    }
    c=1;
    for(i=0;i<n-1;i++)
    {
        if(A[i+1]>A[i])
        {
            B[i+1]=max(B[i]+1,B[i+1]);
        }  
        cout << B[i+1] << " " ;
    }
    cout << endl ;
    for(i=n-1;i>=1;i--)
    {
        if(A[i-1]>A[i])
        {
            B[i-1]=max(B[i]+1,B[i-1]);        
        }
        cout << B[i-1] << " " ;
    }
    cout << endl ;
    ans=0;
    for(i=0;i<n;i++)
    {
        ans+=B[i];
        cout << B[i] << " " ;
    }
    cout<< endl <<ans;
}




    // int n ;
    // cin >> n ;

    // int a[n] , b[n] , res = 0, count = 0 ;
    // a[0] = 1 ;
    // b[n-1] = 0 ;
    // loop(0,n) a[i] = 0 ;
    // loop(0,n) cin >> a[i] ;
    // loop(0,n) b[i] = 0 ;

    // loop(1,n){
    //     // if(i == 1){
    //         if(a[i] > a[i-1]){
    //             count++ ;
    //             a[i] = count ; 
    //         } 
    //         else if(a[i] < a[i-1]){
    //                 count++ ;
    //                 a[i] = count ;
    //         }
            

    // }