#include <bits/stdc++.h>
#define ll long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
// #define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n) for(int i=x; i<n; i++)
using namespace std ; 

vector<ll> vec ;

int main(){
    fastio ;
    ll n , m , k;
    cin >> m >> n ;
    ll arr[n] ;
    loop(0,n)
        cin >> arr[i] ;

    sort(arr,arr+n) ;

    // recur()
    k = m ;
    for( ll i=n-1; i>=0; i--){
        while(m%arr[i] == 0){
            m /= arr[i] ;
            // cout << arr[i] << " " ;
            vec.push_back(m) ;
        }
    }
    // sort(vec.end(), vec.begin()) ;
    sort( vec.begin(), vec.end()) ;

    vector<ll> :: iterator itr ;

    if(m == 1){
    for(itr = vec.begin(); itr != vec.end(); itr++){
        cout << *itr << " " ;
    }
    cout << k << " " ;
    }
    else cout << -1 ;
}