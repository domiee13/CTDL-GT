#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i,j;
        for(i = 0,j=n-1;i<j;i++,j--){
            cout<<a[j]<<" "<<a[i]<<" ";
        }
        if(i==j) cout<<a[i]<<endl;
    }
    return 0;
}