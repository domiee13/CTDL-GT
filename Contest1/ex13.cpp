#include <bits/stdc++.h>

using namespace std;

int n,k;
int a[100];

void display(){
    for(int i = 1;i<=n;i++){
        if(a[i]) cout<<"A";
        else cout<<"B";
    }
    cout<<endl;
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int dem = 0;
            for(int l = 1;l<=n;l++){
                if(a[l]==1) dem++;
            }
            if(dem==k){
                display();
            }
        }
        else Try(i+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        Try(1);
    }
    return 0;
}