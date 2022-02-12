#include <iostream>
using namespace std;
int main(){
    int n,k=0,l=77;cin>>n;
    for(int i=0;i<n;++i){
        int f;cin>>f;
        if(l!=f){++k;l=f;}
    }
    cout<<k;
}
