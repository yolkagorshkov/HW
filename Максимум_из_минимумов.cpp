#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define YES cout<<"YES\n";
typedef vector<int> vi;
typedef vector<vi> vvi;
#define forn(n) for(int i=0;i<n;++i)
#define forn2(n) for(int j=0;j<n;++j)
#define foru(s,e) for(int i=s;i<e;++i)

float fl_div(float n,float divisioner){return divisioner*(n/divisioner-(int)(n/divisioner));}

int main(){
    int m,n;cin>>n>>m;
    vector<int>v(m,1000);
    foru(0,m){
        forn2(n){
            int in;cin>>in;
            v[i]=(in<v[i])?in:v[i];
        }
    }
    int ma=-1;
    for(auto i:v)ma=(i>ma)?i:ma;
    cout<<ma;
}
