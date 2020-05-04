//Dap an: so day la 2^n - 1

#include <bits/stdc++.h>
#define mod 123456789
using namespace std;

long long mul(int n){
    if(n==0) return 1%mod;
    if(n==1) return 2%mod;
    long long tmp = mul(n/2);
    if(n%2) return 2*(tmp%mod)*(tmp%mod)%mod;
    return ((tmp%mod)*(tmp%mod))%mod;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long res = mul(n-1);
        cout<<res<<endl;
    }
    return 0;
}