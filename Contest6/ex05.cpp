#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,tmp,m;
        int a[100005] = {0};
        cin>>n>>m;       
        for(int i = 0;i<n+m;i++){
            cin>>tmp;
            a[tmp]++;
        }
        for(int i = 0;i<100005;i++){
            if(a[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i = 0;i<100005;i++){
            if(a[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}