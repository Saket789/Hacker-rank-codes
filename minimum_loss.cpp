
//      date :- 18-03-2020              Good Question
//       g++ minimum_loss.cpp -o  as

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
int n;
cin >> n;

vector < pair<long,int> > p(n);
for (int i=0;i<n;i++) {
    cin >> p[i].first; // price
    p[i].second=i; //yr
}

sort(p.begin(),p.end());
long minval = 0;
for (int i=1;i<n;i++) {
    if (p[i].second>p[i-1].second) continue; // yr sold > yr bought 
    long diff=p[i].first-p[i-1].first;
    if (!minval) minval=diff;
    else if (diff<minval) minval=diff;
}

cout << minval;

}