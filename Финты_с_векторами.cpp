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
    int n;cin>>n;
    auto v=vi(n);
    for(int i=0,f=1;i<n;++i){
        if(i%2)v[i]=n-f+2;
        else {v[i]=f;++f;}
    }
    for(auto i:v)cout<<i<<' ';
    sort(v.begin(),v.end());
    cout<<'\n'<<v.front()<<" ... "<<v.back()<<'\n';
    for(auto i=v.begin();i!=v.end();++i)cout<<*i<<' ';
    cout<<'\n'<<"Исчо один элемент нада: ";
    int new_last;cin>>new_last;
    v.push_back(new_last);
    cout<<new_last<<" ну наверное можно и так, но это, видимо, вне закона, так что"<<'\n';
    cout<<v.back();
}
