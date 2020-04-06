#include <iostream>
using namespace std;

int a[1000];
int n;

void init(){
    for(int i = 1;i<=n;i++){
        a[i] = i;
    }
}

void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void input(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
}

void display(){
    for(int i = 1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void genNext(){
    int k = n - 1;
    while(k>0 && a[k]>a[k+1]) k--;
    if(k==0){
        init();
    }
    else{
        int j = k+1;
        while(a[j]<a[k]) j--;
        swap(a[j],a[k]);
        int l = k + 1;
        int r = n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}

int main(){
    int count;
    cin>>count;
    while(count--){
        input();
        genNext();
        display();
    }
}
