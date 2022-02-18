#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include "Extrabigint.h"
using namespace std;
#define YES cout<<"YES\n";

typedef vector<int> vi;
typedef vector<vi> vvi;
#define forn(n) for(int i=0;i<n;++i)
#define forn2(n) for(int j=0;j<n;++j)

int index(int lst[],int size,int var){for(int i=size-1;i>0;--i)if(lst[i]==var)return i;}
int factorial(int i){
  if (i==0) return 1;
  else return i*factorial(i-1);
}
int max(int lst[],int size){
    sort(lst,lst+size);
    return lst[size-1];
}
int main(){
    int n;cin>>n;
    auto abiss=vi();//пустой
    auto a=vi(n);//n размер, n с консоли, еще и нулями заполненый
    for(auto i:a)cout<<i<<' ';
    cout<<'\n';
    int m;cin>>m;
    forn(n)a[i]=m;//заполнение m
    for(auto i:a)cout<<i<<' ';
    cout<<'\n';
    auto b=vector<vi>(5);//5
    forn(5)b[i].resize(5);//на 5
    cout<<b.size()<<' '<<b[0].size()<<'\n';
    cout<<a.size()<<' '<<abiss.size();
}
