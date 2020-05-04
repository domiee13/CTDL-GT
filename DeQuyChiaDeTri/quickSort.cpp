#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void quickSort(int a[], int l, int r){
    int i = l;
    int j = r;
    int mid = (l+r)/2;
    do{
        while(a[i]<mid && i < r) i++;
        while(a[j]>mid && j > l) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    } while(i<=j);
    if(l<j) quickSort(a,l,j);
    if(i<r) quickSort(a,i,r);
}

void display(int a[], int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    display(a,n);
    quickSort(a,0,n-1);
    display(a,n);
    return 0;
}