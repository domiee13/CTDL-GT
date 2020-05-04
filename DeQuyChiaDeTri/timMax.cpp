#include <bits/stdc++.h>

using namespace std;

double max(double a[], int l, int r){
    if(l==r) return a[l];
    int m = (l+r)/2;
    double u = max(a,l,m);
    double v = max(a,m+1,r);
    if(u>v) return u;
    else return v;
}

int main(){
    int n;
    cin>>n;
    double a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<max(a,0,n-1)<<endl;
    return 0;
}