
//      karna hai date :- 17-03-2020


#include <bits/stdc++.h>
#define ll long long int
#define deb(x) cout << x << " " ;
#define endl '\n'
// #define vec vector<int> 
#define mk make_pair
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(x,n,v) for(int v=x; v<n; v++)
// map<long,long> mp ; 
// set<long> st ; 
using namespace std ; 

int main(){
    fastio ;
    
    int n,m,k;
    cin >> n >> m >> k;

// assume total area first
long numLampPost=(long)n*(long)m; 

// take care of no track case
if (!k) {
    cout << numLampPost;
    return 0;
}

// input r, c1, c2
vector < tuple<int,int,int> > track;
for (int i=0;i<k;i++) {
    int r,c1,c2;
    cin >> r >> c1 >> c2;
    track.push_back(make_tuple(r,c1,c2));
}

// sort list and start processing from first input
sort(track.begin(),track.end());
vector< tuple<int,int,int> >::iterator it=track.begin();
while(1) {
    int current_r=get<0>(*it); // the current row being processed
    int cx=0,cy=0; // points to a continguous track area

    // process track co-ords of same row r
    while(it!=track.end() && current_r==get<0>(*it)) { 
        if (cx==0) { // take care of first co-ords of row r
            cx=get<1>(*it);
            cy=get<2>(*it);
            it++;
            continue;
        }

        if (get<1>(*it)<=(cy+1) && get<2>(*it)>cy) cy=get<2>(*it);
        else if (get<1>(*it)>(cy+1)) {
            numLampPost-=(cy-cx+1);
            cx=get<1>(*it);
            cy=get<2>(*it);
        }

        it++; // goto next track co-ords
    }  
    numLampPost-=(cy-cx+1); // process the last cx,cy continguous area

    if (it==track.end()) break; // no more to process
}    

cout << numLampPost;
}
