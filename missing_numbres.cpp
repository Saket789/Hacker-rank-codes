
//      karna hai date :- 17-03-2020

#include <bits/stdc++.h>
#define loop(x,n,v) for(int v=x; v<n; v++)
using namespace std;

int main(){
    int n ;
    cin >> n; 
    int arr[n] ;
    loop(0,n,i) cin >> arr[i] ;

    int m , a=0, b=0 , c=0;
    cin >> m ;
    int brr[m], ans=0 ;
    loop(0,m,i) cin >> brr[i] ;

        map<int,int> mp1, mp2 ;
        vector<int> vec, v ;
        vector<int>::iterator itr, itr1=vec.begin();
        
    if(m>n){
        loop(0,m,i){
            mp1[brr[i]]++ ;
            itr = find(vec.begin(), vec.end(), brr[i]);
            if(itr == vec.end())
                vec.push_back(brr[i]);
        }
        loop(0,n,i){
            mp2[arr[i]]++ ;
            // cout << a << " " ;
        }
        itr1 = vec.begin() ;
        while(1){
            if(itr1 == vec.end()) break ;
            // cout << a << " " << b << " ";
            a = *itr1 ;
            // cout << a << " " << b << " ";
            b = mp2[a] - mp1[a] ;
            // cout << a << " " << b << " ";
            if(b != 0) v.push_back(a) ;
            itr1++;
        }
    }
    else{
        loop(0,n,i){
            mp1[arr[i]]++ ;
            itr = find(vec.begin(), vec.end(), arr[i]);
            if(itr == vec.end())
                vec.push_back(arr[i]);
        }
        loop(0,m,i){
            mp2[brr[i]]++ ;
            // cout << a << " " ;
        }
        itr1 = vec.begin() ;
        while(1){
            if(itr1 == vec.end()) break ;
            // cout << a << " " << b << " ";
            a = *itr1 ;
            // cout << a << " " << b << " ";
            b = mp2[a] - mp1[a] ;
            // cout << a << " " << b << " ";
            if(b != 0) v.push_back(a) ;
            itr1++;
        }

    }
    sort(v.begin(), v.end());
    itr = v.begin();
    while(itr != v.end()){
        cout << *itr << " " ;
        itr++ ;
    }
}