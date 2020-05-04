#include <bits/stdc++.h>

using namespace std;

// bool found = false;

int binarySearch(int a[], int k, int l, int r){
    if(r>=l){   
        int mid = (l+r)/2;
        if(k==a[mid]) {
            // found = true;
            return mid;
        }
        if(k>a[mid]) return binarySearch(a,k, mid+1, r);     
        return binarySearch(a,k, l, mid-1);     
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0;i<n;i++){
       cin>>a[i];
    }
    sort(a,a+n);
    if(binarySearch(a,k,0,n-1)!=-1){
        cout<<"Tim thay o vi tri "<<binarySearch(a,k,0,n-1)<<endl;
    }
    else cout<<"Khong tim thay k"<<endl;
    return 0;
}