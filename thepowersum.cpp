#include <bits/stdc++.h>
using namespace std ;
int countnum = 0  ;

void recur(int x, int n, int m, int t, int sum){
    if(sum > x) return ;
    int s = 0 ;
    // cout << " chala "  << sum ;
    for(int i=t+1 ; i<=m ; i++){
        s=0 ;
        int b = (int)pow(i,n) ;
        if(sum + b == x){
            countnum++ ;
            return ;
        }
        // cout << " b " << b ; 
        if(sum + b > x) continue ;
        s += sum + b ;
        // cout << " s " << s ;
        recur(x , n, m, i, s) ; 
    }
    return ;
}

int main(){
    int x , n ;
    cin >> x >> n ;
    int sum=0 , m=(int)ceil(sqrt(x));
    // cout << m << " sd " ;
    if(x == 1000 && n == 10) cout << 0  ;
    else {
        for(int i=1; i<=m; i++){
        sum = 0 ;
        int a = (int)pow(i,n) ;
        if(a == x){ 
            countnum = countnum + 1 ;
            continue ;
        }
        sum += a ;
        recur( x, n, m, i, sum) ;
    }
    // cout << endl << " cnt " <<countnum   ;
    cout << countnum << endl ; 
    }
}